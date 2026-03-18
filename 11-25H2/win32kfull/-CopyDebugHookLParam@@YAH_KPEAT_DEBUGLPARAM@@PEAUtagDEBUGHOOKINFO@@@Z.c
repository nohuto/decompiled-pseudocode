/*
 * XREFs of ?CopyDebugHookLParam@@YAH_KPEAT_DEBUGLPARAM@@PEAUtagDEBUGHOOKINFO@@@Z @ 0x1401A6084
 * Callers:
 *     fnHkINLPDEBUGHOOKSTRUCT @ 0x1400C3C04 (fnHkINLPDEBUGHOOKSTRUCT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CopyDebugHookLParam(__int64 a1, union _DEBUGLPARAM *a2, struct tagDEBUGHOOKINFO *a3)
{
  __int128 *v3; // r9
  unsigned int v4; // r10d
  _OWORD *v5; // rax
  int v6; // ecx
  _OWORD *v8; // rax
  int v9; // ecx
  __int64 v10; // rax
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rax
  __int128 v16; // xmm0

  v3 = (__int128 *)*((_QWORD *)a3 + 1);
  v4 = 1;
  if ( !v3 )
    return 0;
  if ( a1 == 3 )
  {
LABEL_3:
    *((_DWORD *)v3 + 3) = 0;
    *(_DWORD *)(*((_QWORD *)a3 + 1) + 44LL) = 0;
    v5 = (_OWORD *)*((_QWORD *)a3 + 1);
    *(_OWORD *)a2 = *v5;
    *((_OWORD *)a2 + 1) = v5[1];
    *((_OWORD *)a2 + 2) = v5[2];
    v6 = *((_DWORD *)a2 + 2);
    if ( (v6 & 0x1FFFFu) < 0x400 && _bittest16(&MessageTable[(unsigned __int16)v6], 8u) )
      *((_QWORD *)a2 + 3) = 0LL;
    return v4;
  }
  if ( a1 == 4 )
  {
    *((_DWORD *)v3 + 5) = 0;
    v8 = (_OWORD *)*((_QWORD *)a3 + 1);
    *(_OWORD *)a2 = *v8;
    *((_OWORD *)a2 + 1) = v8[1];
    v9 = *((_DWORD *)a2 + 4);
    if ( (v9 & 0x1FFFFu) < 0x400 && _bittest16(&MessageTable[(unsigned __int16)v9], 8u) )
      *(_QWORD *)a2 = 0LL;
    return v4;
  }
  if ( a1 != 12 )
  {
    switch ( a1 )
    {
      case 5LL:
        v12 = *((_DWORD *)a3 + 6);
        if ( v12 )
        {
          v13 = v12 - 3;
          if ( v13 )
          {
            v14 = v13 - 2;
            if ( v14 )
            {
              if ( v14 == 1 )
                goto LABEL_20;
              return 0;
            }
            *((_DWORD *)v3 + 1) = 0;
            v16 = *(_OWORD *)*((_QWORD *)a3 + 1);
LABEL_28:
            *(_OWORD *)a2 = v16;
            return v4;
          }
        }
        break;
      case 6LL:
        goto LABEL_3;
      case 7LL:
LABEL_20:
        *((_DWORD *)v3 + 5) = 0;
        *(_DWORD *)(*((_QWORD *)a3 + 1) + 36LL) = 0;
        v15 = *((_QWORD *)a3 + 1);
        *(_OWORD *)a2 = *(_OWORD *)v15;
        *((_OWORD *)a2 + 1) = *(_OWORD *)(v15 + 16);
        *((_QWORD *)a2 + 4) = *(_QWORD *)(v15 + 32);
        return v4;
      case 10LL:
        if ( *((_DWORD *)a3 + 6) != 5 )
          return 0;
        break;
      case -1LL:
        goto LABEL_3;
      default:
        return 0;
    }
    v16 = *v3;
    goto LABEL_28;
  }
  *((_DWORD *)v3 + 7) = 0;
  v10 = *((_QWORD *)a3 + 1);
  *(_OWORD *)a2 = *(_OWORD *)v10;
  *((_OWORD *)a2 + 1) = *(_OWORD *)(v10 + 16);
  *((_QWORD *)a2 + 4) = *(_QWORD *)(v10 + 32);
  v11 = *((_DWORD *)a2 + 6);
  if ( (v11 & 0x1FFFFu) < 0x400 && _bittest16(&MessageTable[(unsigned __int16)v11], 8u) )
    *((_QWORD *)a2 + 1) = 0LL;
  return v4;
}
