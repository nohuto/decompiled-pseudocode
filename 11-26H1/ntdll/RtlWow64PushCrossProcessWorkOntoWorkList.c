/*
 * XREFs of RtlWow64PushCrossProcessWorkOntoWorkList @ 0x18014CDD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 */

char __fastcall RtlWow64PushCrossProcessWorkOntoWorkList(
        volatile signed __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  __int128 v5; // xmm1
  __int128 v6; // xmm3
  char v7; // bl
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  signed __int64 v12; // r12
  __int64 v13; // xmm2_8
  unsigned __int64 v14; // r8
  unsigned int v15; // r8d
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rcx
  bool v18; // zf
  signed __int64 v19; // rax
  signed __int64 v21; // [rsp+28h] [rbp-A0h]
  __int64 v22; // [rsp+50h] [rbp-78h]
  char v23; // [rsp+E8h] [rbp+20h]

  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v23 = 0;
  v9 = (unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL;
  v10 = ((unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL) + 0x4000;
  v11 = a2 + 40;
  if ( v10 <= v9 || v11 <= a2 || a2 < v9 || v11 > v10 )
LABEL_29:
    RtlRaiseStatus(-1073741811);
  v12 = *a1;
  v13 = 0LL;
  while ( 1 )
  {
    LODWORD(v21) = v12;
    if ( (int)v12 >= 0 )
    {
      v15 = v12 & 0x7FFFFFFF;
      if ( *(_DWORD *)(a2 + 4) == 8 )
      {
        if ( v15 )
        {
          v16 = *(_QWORD *)(a2 + 8) + *(_QWORD *)(a2 + 16);
          if ( v16 >= *(_QWORD *)(a2 + 8) )
          {
            v8 = (unsigned __int64)a1 + v15;
            if ( v8 + 40 < v8
              || v8 < ((unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL)
              || v8 + 40 > ((unsigned __int64)a1 & 0xFFFFFFFFFFFFF000uLL) + 0x4000 )
            {
              goto LABEL_29;
            }
            if ( *(_DWORD *)(v8 + 4) == 8 )
            {
              v17 = *(_QWORD *)(v8 + 8);
              v22 = *(_QWORD *)(v8 + 16);
              if ( v17 + v22 >= v17 && *(_QWORD *)(a2 + 8) == v17 + v22 )
              {
                if ( !v23 )
                {
                  v5 = *(_OWORD *)a2;
                  v6 = *(_OWORD *)(a2 + 16);
                  v13 = *(_QWORD *)(a2 + 32);
                  v23 = 1;
                }
                *(_DWORD *)a2 = *(_DWORD *)v8;
                *(_QWORD *)(a2 + 8) = v17;
                *(_QWORD *)(a2 + 16) = v16 - v17;
                v7 = 1;
              }
            }
          }
        }
      }
      if ( v7 )
      {
        v14 = v8;
      }
      else
      {
        *(_DWORD *)a2 = v15;
        v14 = 0LL;
      }
      LODWORD(v21) = (a2 - (_DWORD)a1) & 0x7FFFFFFF | v12 & 0x80000000;
    }
    else
    {
      v14 = a2;
    }
    HIDWORD(v21) = HIDWORD(v12) + 1;
    v19 = _InterlockedCompareExchange64(a1, v21, v12);
    v18 = v12 == v19;
    v12 = v19;
    if ( v18 )
      break;
    if ( v7 )
    {
      *(_OWORD *)a2 = v5;
      *(_OWORD *)(a2 + 16) = v6;
      *(_QWORD *)(a2 + 32) = v13;
      v7 = 0;
    }
  }
  *a3 = v14;
  return 1;
}
