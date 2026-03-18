/*
 * XREFs of ?ReferenceAdapter@CTokenManager@@UEAAJU_LUID@@PEAPEAUIAdapter@@@Z @ 0x14003D8E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CTokenManager::ReferenceAdapter(CTokenManager *this, struct _LUID a2, struct IAdapter **a3)
{
  char *v3; // rsi
  DWORD LowPart; // ebx
  struct IAdapter *v6; // r14
  unsigned int v8; // ebp
  char *v9; // r8
  __int64 i; // rdx
  __int64 v11; // rdi
  __int64 result; // rax
  LONG HighPart; // [rsp+4Ch] [rbp+14h]

  HighPart = a2.HighPart;
  v3 = (char *)this + 144;
  LowPart = a2.LowPart;
  v6 = 0LL;
  v8 = -1073741275;
  ExAcquirePushLockSharedEx((char *)this + 144, 0LL);
  v9 = (char *)this + 128;
  v3[8] = 0;
  for ( i = *((_QWORD *)this + 17); (char *)i != v9; i = *(_QWORD *)(i + 8) )
  {
    v11 = (i - 8) & -(__int64)(i != 0);
    if ( LowPart == *(_DWORD *)(v11 + 0x18) && HighPart == *(_DWORD *)(((i - 8) & -(__int64)(i != 0)) + 0x1C) )
    {
      (**(void (__fastcall ***)(__int64))v11)((i - 8) & -(__int64)(i != 0));
      v8 = 0;
      v6 = (struct IAdapter *)v11;
      break;
    }
  }
  if ( v3[8] )
    ExReleasePushLockExclusiveEx(v3, 0LL);
  else
    ExReleasePushLockSharedEx(v3, 0LL);
  result = v8;
  *a3 = v6;
  return result;
}
