/*
 * XREFs of PnpDequeuePendingSurpriseRemoval @ 0x1409B5D68
 * Callers:
 *     PnpDelayedRemoveWorker @ 0x1409B5BA0 (PnpDelayedRemoveWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall PnpDequeuePendingSurpriseRemoval(__int64 a1)
{
  PVOID **v1; // rdx
  PVOID *v2; // r8
  PVOID *v3; // rax
  PVOID ***v4; // rax

  v1 = (PVOID **)IopPendingSurpriseRemovals;
  if ( IopPendingSurpriseRemovals != &IopPendingSurpriseRemovals )
  {
    do
    {
      v2 = *v1;
      if ( *((_BYTE *)v1 + 104) )
      {
        if ( *((_DWORD *)*v1[8] + 2) == *(_DWORD *)*v1[8] )
        {
          if ( v2[1] != v1
            || (v3 = v1[1], *v3 != v1)
            || (*v3 = v2, v2[1] = v3, v4 = *(PVOID ****)(a1 + 8), *v4 != (PVOID **)a1) )
          {
            __fastfail(3u);
          }
          *v1 = (PVOID *)a1;
          v1[1] = (PVOID *)v4;
          *v4 = v1;
          *(_QWORD *)(a1 + 8) = v1;
        }
        else
        {
          *((_BYTE *)v1 + 104) = 0;
        }
      }
      v1 = (PVOID **)v2;
    }
    while ( v2 != &IopPendingSurpriseRemovals );
  }
}
