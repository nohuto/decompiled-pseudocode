/*
 * XREFs of MiFreeRelocations @ 0x140AA79E0
 * Callers:
 *     MiDeleteControlArea @ 0x140481D20 (MiDeleteControlArea.c)
 *     MiRelocateCleanup @ 0x14099B9E4 (MiRelocateCleanup.c)
 * Callees:
 *     MiSetControlAreaImageRange @ 0x1404B6F4C (MiSetControlAreaImageRange.c)
 *     MiGetControlAreaImageRange @ 0x1404D6208 (MiGetControlAreaImageRange.c)
 *     MiReturnImageBase @ 0x140A85CA8 (MiReturnImageBase.c)
 *     MiFreeImageLoadConfig @ 0x140AA7AAC (MiFreeImageLoadConfig.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeRelocations(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  unsigned int v6; // ecx
  __int128 v7; // [rsp+20h] [rbp-30h] BYREF
  __int128 v8; // [rsp+30h] [rbp-20h] BYREF
  __int64 v9; // [rsp+40h] [rbp-10h]

  v9 = 0LL;
  v8 = 0LL;
  v7 = 0LL;
  MiGetControlAreaImageRange(a1, (__int64)&v7);
  if ( (_QWORD)v7 != 0xFFFFFFFFLL )
  {
    v6 = *(_DWORD *)(a1 + 92);
    *(_QWORD *)&v8 = v7;
    DWORD2(v8) = DWORD2(v7);
    LODWORD(v9) = (v6 >> 20) & 3;
    if ( (*(_DWORD *)(a1 + 56) & 0x8000) != 0 && (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    {
      BYTE12(v8) = 1;
      BYTE13(v8) = BYTE2(v6) & 1;
    }
    else
    {
      BYTE12(v8) = 0;
    }
    MiReturnImageBase((__int64)&v8);
    *(_QWORD *)&v7 = -1LL;
    MiSetControlAreaImageRange(a1, (__int64)&v7, 0);
  }
  MiFreeImageLoadConfig(a2 + 9);
  v4 = (_QWORD *)a2[2];
  if ( v4 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      ExFreePoolWithTag(v4, 0);
      v4 = v5;
    }
    while ( v5 );
  }
  ExFreePoolWithTag(a2, 0);
}
