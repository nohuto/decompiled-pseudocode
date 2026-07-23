/*
 * XREFs of MiInitializeQueryBasicInfo @ 0x140B14E0C
 * Callers:
 *     MiQueryAddressSpan @ 0x1402E6FF0 (MiQueryAddressSpan.c)
 * Callees:
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 */

char __fastcall MiInitializeQueryBasicInfo(_OWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // r11
  int *v6; // rdx
  int v7; // r10d
  __int64 v8; // rdx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v2 = *(_QWORD *)(a2 + 136);
  LODWORD(v3) = MiReadVadFlags(v2);
  v7 = *v6;
  *(_QWORD *)v4 = *((_QWORD *)v6 + 5) & 0xFFFFFFFFFFFFF000uLL;
  *(_QWORD *)(v4 + 8) = (*(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32)) << 12;
  *(_DWORD *)(v4 + 16) = MmProtectToValue[((unsigned int)v3 >> 5) & 0x1F];
  if ( (v3 & 0x80000) != 0 )
  {
    *(_DWORD *)(v4 + 40) = 0x20000;
  }
  else
  {
    LOBYTE(v3) = v3 & 0x1C;
    v8 = **(_QWORD **)(v2 + 80);
    if ( (_BYTE)v3 == 8 )
    {
      *(_DWORD *)(v4 + 40) = 0x1000000;
    }
    else
    {
      v3 = *(_QWORD *)(v5 + 16);
      *(_DWORD *)(v4 + 40) = 0x40000;
      if ( v7 == 3 && v3 >= 0x30 || v7 == 7 )
      {
        v3 = *(_QWORD *)(v8 + 64);
        if ( !v3 )
          *(_DWORD *)(v4 + 40) = 0x8000000;
      }
    }
  }
  return v3;
}
