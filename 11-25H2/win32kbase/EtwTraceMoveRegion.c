/*
 * XREFs of EtwTraceMoveRegion @ 0x1401D0D20
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x140026B64 (-GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z.c)
 *     McTemplateK0xqnqNR3_EtwWriteTransfer @ 0x140027570 (McTemplateK0xqnqNR3_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceMoveRegion(__int64 a1, int a2, int a3, struct REGION *a4)
{
  unsigned int RegionPtrData; // eax
  unsigned int v9; // edi
  struct _RGNDATA *v10; // rax
  char *v11; // rbx
  int v12; // r8d
  void *v13; // rdx

  if ( a4 )
  {
    if ( (W32kEtwEnabledKeyword & 0x8000000000001000uLL) != 0
      && (unsigned __int8)(byte_14029EDB8 - 1) > 2u
      && (qword_14029EDA0 & 0x8000000000001000uLL) != 0
      && (qword_14029EDA8 & 0x8000000000001000uLL) == qword_14029EDA8 )
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
                v13 = &DirtyRgnEvent;
                goto LABEL_14;
              }
            }
            else if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
            {
              v13 = &MoveRgnEvent;
LABEL_14:
              McTemplateK0xqnqNR3_EtwWriteTransfer((__int64)(v11 + 16), (__int64)v13, v12, a1, a3);
            }
          }
          GreDeleteFastMutex(v11);
        }
      }
    }
  }
}
