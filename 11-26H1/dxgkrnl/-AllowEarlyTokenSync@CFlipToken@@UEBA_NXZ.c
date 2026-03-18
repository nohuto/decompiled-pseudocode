/*
 * XREFs of ?AllowEarlyTokenSync@CFlipToken@@UEBA_NXZ @ 0x14003E320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CFlipToken::AllowEarlyTokenSync(CFlipToken *this)
{
  char v1; // bl
  __int64 v2; // rsi
  bool v3; // bp
  __int64 v4; // r14
  __int64 v5; // rdi
  _QWORD *v6; // rsi
  _QWORD *i; // rax

  v1 = 0;
  if ( !*((_DWORD *)this + 32) && (!*((_BYTE *)this + 579) || *((_BYTE *)this + 583)) )
  {
    v2 = *((_QWORD *)this + 6);
    v3 = 0;
    v4 = *((_QWORD *)this + 7);
    KeEnterCriticalRegion();
    v5 = v2 + 48;
    ExAcquirePushLockSharedEx(v2 + 48, 0LL);
    if ( *(_DWORD *)(v2 + 160) )
    {
      v6 = (_QWORD *)(v2 + 144);
      for ( i = (_QWORD *)*v6; i != v6; i = (_QWORD *)*i )
      {
        if ( *(i - 1) == v4 )
        {
          v3 = (i[20] & 0x200) != 0;
          break;
        }
      }
    }
    if ( PsGetCurrentThreadId() == *(HANDLE *)(v5 + 8) )
    {
      *(_QWORD *)(v5 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v5, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v5, 0LL);
    }
    KeLeaveCriticalRegion();
    return v3;
  }
  return v1;
}
