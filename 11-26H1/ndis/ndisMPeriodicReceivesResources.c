/*
 * XREFs of ndisMPeriodicReceivesResources @ 0x14002FB00
 * Callers:
 *     ?ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140030C50 (-ndisMIndicateReceiveNblsWithThrottling@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     ndisFreePeriodicReceives @ 0x14002FA50 (ndisFreePeriodicReceives.c)
 *     ndisCopyPeriodicReceiveNbl @ 0x14002FCF0 (ndisCopyPeriodicReceiveNbl.c)
 */

__int64 __fastcall ndisMPeriodicReceivesResources(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int a4, char a5)
{
  __int64 v5; // r15
  unsigned __int8 v6; // bp
  _QWORD *v8; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  struct _NET_BUFFER_LIST *v12; // rdi
  unsigned int v13; // r12d
  _QWORD *v14; // r13
  KSPIN_LOCK *v15; // rcx
  _QWORD *v16; // r13
  char v17; // si
  struct _NET_BUFFER_LIST ***v18; // rcx
  KSPIN_LOCK *v19; // rcx
  __int64 v21; // rax
  struct _NET_BUFFER_LIST **i; // [rsp+20h] [rbp-48h]
  KIRQL v23; // [rsp+88h] [rbp+20h]

  v5 = a4;
  v6 = 0;
  *(_DWORD *)(a1 + 3236) += a4;
  v8 = a2;
  v23 = 0;
  if ( *(_DWORD *)(a1 + 3168) == 1 )
  {
    v10 = ndisCopyPeriodicReceiveNbl(a1, a3, a2);
    v12 = (struct _NET_BUFFER_LIST *)v10;
    if ( v10 )
    {
      v13 = 1;
      v14 = (_QWORD *)v10;
      for ( i = (struct _NET_BUFFER_LIST **)v10; ; i = (struct _NET_BUFFER_LIST **)v21 )
      {
        v8 = (_QWORD *)*v8;
        if ( !v8 )
          break;
        v21 = ndisCopyPeriodicReceiveNbl(v11, a3, v8);
        if ( !v21 )
        {
          ndisFreePeriodicReceives(v12);
          return v6;
        }
        *v14 = v21;
        ++v13;
        v14 = (_QWORD *)v21;
      }
      v15 = (KSPIN_LOCK *)(a1 + 3176);
      v16 = (_QWORD *)(a1 + 3184);
      if ( (a5 & 1) != 0 )
      {
        v17 = 1;
        KeAcquireSpinLockAtDpcLevel(v15);
      }
      else
      {
        v17 = 0;
        v23 = KeAcquireSpinLockRaiseToDpc(v15);
      }
      *v16 = KeGetCurrentThread();
      if ( *(_DWORD *)(a1 + 3168) == 1 && (unsigned __int64)(v5 + *(int *)(a1 + 3192)) < 0x3E8 )
      {
        *(_DWORD *)(a1 + 3228) += v13;
        _InterlockedAdd((volatile signed __int32 *)(a1 + 3224), v13);
        v18 = (struct _NET_BUFFER_LIST ***)(a1 + 3208);
        if ( *(_QWORD *)(a1 + 3200) )
          **v18 = v12;
        else
          *(_QWORD *)(a1 + 3200) = v12;
        v6 = 1;
        *(_DWORD *)(a1 + 3192) += v13;
        *v18 = i;
      }
      else
      {
        ndisFreePeriodicReceives(v12);
      }
      *v16 = 0LL;
      v19 = (KSPIN_LOCK *)(a1 + 3176);
      if ( v17 )
        KeReleaseSpinLockFromDpcLevel(v19);
      else
        KeReleaseSpinLock(v19, v23);
    }
  }
  return v6;
}
