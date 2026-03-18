/*
 * XREFs of EtwTraceDWMGetDirtyRegion @ 0x140028540
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x140026B64 (-GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z.c)
 *     ?sizeSave@RGNOBJ@@QEAAKXZ @ 0x140026EA0 (-sizeSave@RGNOBJ@@QEAAKXZ.c)
 *     McTemplateK0xqnqNR3_EtwWriteTransfer @ 0x140027570 (McTemplateK0xqnqNR3_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceDWMGetDirtyRegion(__int64 a1, int a2, struct REGION *a3)
{
  int v6; // eax
  unsigned int v7; // edi
  struct _RGNDATA *v8; // rax
  char *v9; // rbx
  int v10; // r8d
  int v11; // [rsp+20h] [rbp-48h]
  struct REGION *v12; // [rsp+80h] [rbp+18h] BYREF

  if ( a3 )
  {
    if ( (W32kEtwEnabledKeyword & 0x8000000000001000uLL) != 0
      && (unsigned __int8)(byte_14029EDB8 - 1) > 2u
      && (qword_14029EDA0 & 0x8000000000001000uLL) != 0
      && (qword_14029EDA8 & 0x8000000000001000uLL) == qword_14029EDA8 )
    {
      v12 = a3;
      v6 = RGNOBJ::sizeSave((RGNOBJ *)&v12, (const struct REGION_CORE *)0x8000000000001000LL);
      v7 = v6 + 32;
      if ( v6 != -32 )
      {
        v8 = (struct _RGNDATA *)Win32AllocPoolImpl(256LL, v7, 0x79737355u);
        v9 = (char *)v8;
        if ( v8 )
        {
          if ( (unsigned int)GrepGetRegionPtrData(a3, v7, v8) )
          {
            if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
            {
              v11 = a2;
              McTemplateK0xqnqNR3_EtwWriteTransfer((__int64)(v9 + 16), (__int64)&DWMGetRgnEvent, v10, a1, v11);
            }
          }
          GreDeleteFastMutex(v9);
        }
      }
    }
  }
}
