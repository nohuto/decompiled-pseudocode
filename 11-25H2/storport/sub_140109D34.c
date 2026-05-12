/*
 * XREFs of sub_140109D34 @ 0x140109D34
 * Callers:
 *     sub_140101854 @ 0x140101854 (sub_140101854.c)
 * Callees:
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 */

__int64 __fastcall sub_140109D34(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // eax

  if ( *(_WORD *)(*(_QWORD *)(a2 + 24) + 10LL) >= 8u )
  {
    v5 = (__int64 *)sub_1401225EC(*(_QWORD *)(a1 + 16));
    v6 = (__int64)v5;
    if ( v5 )
    {
      v7 = *v5;
      v8 = *(_DWORD *)(a1 + 56);
      *(_BYTE *)(v7 + 4096) = 10;
      *(_DWORD *)(v7 + 4100) = v8;
      *(_BYTE *)(v7 + 4136) = -125;
      *(_DWORD *)(*(_QWORD *)v6 + 4256LL) |= 1u;
      *(_DWORD *)(*(_QWORD *)v6 + 4256LL) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)v6 + 4256LL) &= ~2u;
      *(_QWORD *)(*(_QWORD *)v6 + 4184LL) = a2;
      *(_QWORD *)(*(_QWORD *)v6 + 4192LL) = sub_140109E40;
      *(_QWORD *)(*(_QWORD *)v6 + 4200LL) = v6;
      *(_QWORD *)(*(_QWORD *)v6 + 4216LL) = a1;
      v4 = sub_1400BD378(*(PVOID *)(a1 + 16), v6);
      sub_140122C20(*(_QWORD *)(a1 + 16), v6);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return v4;
}
