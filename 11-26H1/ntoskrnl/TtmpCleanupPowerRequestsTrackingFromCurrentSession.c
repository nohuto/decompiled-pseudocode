/*
 * XREFs of TtmpCleanupPowerRequestsTrackingFromCurrentSession @ 0x1407EC8C8
 * Callers:
 *     TtmCleanupCurrentSession @ 0x1409F5AB8 (TtmCleanupCurrentSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall TtmpCleanupPowerRequestsTrackingFromCurrentSession(__int64 a1)
{
  _QWORD **v1; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  _QWORD **v5; // r14
  _QWORD *i; // rcx
  _QWORD **v7; // rsi
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  void *v10; // rcx

  v1 = *(_QWORD ***)(a1 + 280);
  v3 = v1;
  while ( v3 )
  {
    v4 = (_QWORD *)*v3;
    v3 = v4;
    if ( ((unsigned __int8)v4 & 1) != 0 )
      break;
LABEL_9:
    if ( !v4 )
      goto LABEL_23;
    v5 = (_QWORD **)v3;
    for ( i = v1; (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == v3 )
      {
        *i = *v3;
        --*(_DWORD *)(a1 + 272);
        *v3 |= 0x8000000000000002uLL;
        v3 = i;
        goto LABEL_16;
      }
    }
    v5 = 0LL;
LABEL_16:
    v7 = v5 + 6;
    while ( 1 )
    {
      v8 = *v7;
      if ( *v7 == v7 )
        break;
      if ( (_QWORD **)v8[1] != v7 || (v9 = (_QWORD *)*v8, *(_QWORD **)(*v8 + 8LL) != v8) )
        __fastfail(3u);
      *v7 = v9;
      v9[1] = v7;
      ExFreePoolWithTag(v8 - 1, 0x52507454u);
    }
    ExFreePoolWithTag(v5, 0x52507454u);
  }
  for ( ++v1; (unsigned __int64)v1 < *(_QWORD *)(a1 + 280) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 276) >> 5); ++v1 )
  {
    v3 = *v1;
    if ( ((unsigned __int8)*v1 & 1) == 0 )
    {
      v4 = *v1;
      goto LABEL_9;
    }
  }
LABEL_23:
  v10 = *(void **)(a1 + 280);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x52507454u);
}
