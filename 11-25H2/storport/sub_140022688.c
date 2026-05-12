/*
 * XREFs of sub_140022688 @ 0x140022688
 * Callers:
 *     sub_140021A00 @ 0x140021A00 (sub_140021A00.c)
 *     sub_1400388F8 @ 0x1400388F8 (sub_1400388F8.c)
 * Callees:
 *     sub_1400566A4 @ 0x1400566A4 (sub_1400566A4.c)
 */

__int64 __fastcall sub_140022688(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4, int a5)
{
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned int v8; // r10d
  unsigned __int64 v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  unsigned __int64 v15; // rdx

  v5 = *(_QWORD *)(a1 + 184);
  v6 = a1;
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_DWORD *)(v5 + 16);
  if ( v8 >= 0x1C )
  {
    if ( *(_DWORD *)v7 != 28 )
      return 3221225561LL;
    v10 = *(unsigned int *)(v7 + 24) + 28LL;
    if ( v10 <= 0xFFFFFFFF )
    {
      v11 = *(_DWORD *)(v5 + 8);
      if ( v11 < (unsigned int)v10 && v8 < (unsigned int)v10 )
        return 3221225507LL;
      if ( a2 )
        *(_QWORD *)a2 = v7;
      if ( a3 )
        *(_DWORD *)a3 = v10;
      if ( a4 )
        *a4 = v11;
      if ( a5 == 1 )
      {
        v12 = *(_QWORD *)(v7 + 4);
        a2 = 0x455241574D524946LL;
        a3 = 0x464E494555455551LL;
        if ( v12 != 0x4B53494452425948LL )
        {
          a1 = 0x4B53494449534353LL;
          if ( v12 != 0x4B53494449534353LL
            && v12 != 0x455241574D524946LL
            && v12 != 0x464E494555455551LL
            && v12 != 0x5551455441455243LL
            && v12 != 0x55514554454C4544LL
            && v12 != 0x464E495255444E45LL )
          {
            a1 = 0x524F545350534155LL;
            if ( v12 != 0x524F545350534155LL )
              return 3221225488LL;
          }
          if ( v12 != 0x455241574D524946LL
            && v12 != 0x464E494555455551LL
            && v12 != 0x5551455441455243LL
            && v12 != 0x55514554454C4544LL
            && v12 != 0x464E495255444E45LL
            && *(_BYTE *)(v6 + 64) )
          {
            return 3221225506LL;
          }
        }
      }
      v13 = *(_DWORD *)(v7 + 16);
      if ( v13 == 1771008 )
      {
        if ( v8 >= 0x22 )
        {
          if ( *(_WORD *)(v7 + 32) != 224 || !*(_BYTE *)(v6 + 64) )
            return 0LL;
          return 3221225506LL;
        }
        return 3221225485LL;
      }
      if ( v13 != 1771040 )
        return 0LL;
      v14 = sub_1400566A4(a1, a2, a3);
      v15 = *(unsigned int *)(v5 + 16);
      if ( !(v14 ? (unsigned int)v15 < 0x34 : (unsigned int)v15 < 0x28) )
      {
        if ( *(_DWORD *)(v7 + 36) != 1 && *(_BYTE *)(v6 + 64) )
          return 3221225506LL;
        if ( (unsigned int)v15 >= (unsigned int)v10 )
          return v15 < *(unsigned int *)(v7 + 44) + (unsigned __int64)*(unsigned int *)(v7 + 48) ? 0xC000000D : 0;
      }
    }
  }
  return 3221225485LL;
}
