/*
 * XREFs of ??$ndisIterativeDPAddNblsToTracker@$0A@@@YAXPEAU_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400413B0
 * Callers:
 *     ?ndisFilterSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1400257A0 (-ndisFilterSendNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ndisIterativeDPAddNblsToTracker<0>(_QWORD *a1, __int64 a2, int a3, int a4)
{
  _QWORD *result; // rax
  _QWORD *v5; // rcx

  result = a1 + 1;
  if ( !*a1 )
  {
    *a1 = a2;
LABEL_3:
    *result = a2;
    *(_QWORD *)(a2 + 112) = 0LL;
    *(_DWORD *)(a2 + 132) = a3;
    *(_DWORD *)(a2 + 140) = a4;
    return result;
  }
  v5 = (_QWORD *)*result;
  if ( a4 != *(_DWORD *)(*result + 140LL) || a3 != *((_DWORD *)v5 + 33) || (a3 & 0x34) != 0 )
  {
    v5[14] = a2;
    goto LABEL_3;
  }
  result = (_QWORD *)*v5;
  if ( *v5 )
  {
    do
    {
      v5 = result;
      result = (_QWORD *)*result;
    }
    while ( result );
  }
  *v5 = a2;
  return result;
}
