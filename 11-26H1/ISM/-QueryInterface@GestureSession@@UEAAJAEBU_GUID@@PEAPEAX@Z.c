/*
 * XREFs of ?QueryInterface@GestureSession@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B8050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GestureSession::QueryInterface(GestureSession *this, const struct _GUID *a2, GestureSession **a3)
{
  __int64 v4; // rax
  GestureSession *v5; // rbx
  __int64 v6; // rax

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  v5 = this;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v4 )
    goto LABEL_8;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_771487fa_af98_46fe_9c2a_09b9988c067a.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_771487fa_af98_46fe_9c2a_09b9988c067a.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_771487fa_af98_46fe_9c2a_09b9988c067a.Data4;
  if ( v6 )
  {
    v5 = 0LL;
  }
  else
  {
LABEL_8:
    if ( this )
      (*(void (__fastcall **)(GestureSession *))(*(_QWORD *)this + 8LL))(this);
  }
  *a3 = v5;
  return v5 == 0LL ? 0x80004002 : 0;
}
