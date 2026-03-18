/*
 * XREFs of EtwTraceMoveRegion @ 0x1401F9EE0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x1400A7F4C (-GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z.c)
 *     McTemplateK0xqnqNR3_EtwWriteTransfer @ 0x1400A80E8 (McTemplateK0xqnqNR3_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceMoveRegion(__int64 a1, int a2, int a3, struct REGION *a4)
{
  DWORD RegionPtrData; // eax
  DWORD v9; // edi
  struct _RGNDATA *v10; // rax
  char *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  const EVENT_DESCRIPTOR *v15; // rdx

  if ( a4 )
  {
    if ( (W32kEtwEnabledKeyword & 0x8000000000001000uLL) != 0
      && (unsigned __int8)(byte_1402A9DD8 - 1) > 2u
      && (qword_1402A9DC0 & 0x8000000000001000uLL) != 0
      && (qword_1402A9DC8 & 0x8000000000001000uLL) == qword_1402A9DC8 )
    {
      RegionPtrData = GrepGetRegionPtrData(a4, 0, 0LL);
      v9 = RegionPtrData;
      if ( RegionPtrData )
      {
        v10 = (struct _RGNDATA *)Win32AllocPoolImpl(256LL, RegionPtrData, 0x79737355u);
        v11 = (char *)v10;
        if ( v10 )
        {
          if ( (unsigned int)GrepGetRegionPtrData(a4, v9, v10) )
          {
            if ( a2 )
            {
              if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
              {
                v15 = (const EVENT_DESCRIPTOR *)&DirtyRgnEvent;
                goto LABEL_14;
              }
            }
            else if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
            {
              v15 = (const EVENT_DESCRIPTOR *)&MoveRgnEvent;
LABEL_14:
              McTemplateK0xqnqNR3_EtwWriteTransfer((__int64)(v11 + 16), v15, v13, a1, a3);
            }
          }
          GreDeleteFastMutex(v11, v12, v13, v14);
        }
      }
    }
  }
}
