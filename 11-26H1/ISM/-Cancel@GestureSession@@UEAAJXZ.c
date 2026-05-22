/*
 * XREFs of ?Cancel@GestureSession@@UEAAJXZ @ 0x1801B7CE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GestureSession::Cancel(GestureSession *this)
{
  __int64 result; // rax

  (*(void (__fastcall **)(GestureSession *))(*(_QWORD *)this + 80LL))(this);
  result = 0LL;
  *((_BYTE *)this + 25) = 1;
  *((_DWORD *)this + 4) = 0;
  return result;
}
