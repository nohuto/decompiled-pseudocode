/*
 * XREFs of PpmUpdatePerfStates @ 0x140AD8A50
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     PpmReapplyPerfPolicy @ 0x140AD8B10 (PpmReapplyPerfPolicy.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140AD8DD8 (PpmPerfUpdateDomainPolicy.c)
 */

int __fastcall PpmUpdatePerfStates(unsigned int *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned int v7; // r8d
  PBOOLEAN v8; // rdx
  PBOOLEAN v9; // r9
  char v10; // cl
  unsigned int i; // r8d
  __int64 v12; // r11
  __int64 v13; // r10
  int v15; // [rsp+30h] [rbp+8h] BYREF

  PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, a2, a3);
  if ( a1[2] )
  {
    v8 = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
    v9 = 0LL;
    v10 = 0;
    while ( v8 != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2) )
    {
      v9 = v8;
      for ( i = 0; i < *((_DWORD *)v8 + 74); ++i )
      {
        v12 = *((_QWORD *)v8 + 39);
        v13 = 1224LL * i;
        if ( *(_DWORD *)(v13 + v12 + 16) && *(_DWORD *)(v13 + v12 + 20) == a1[1] )
        {
          v10 = 1;
          goto LABEL_19;
        }
      }
      v8 = *(PBOOLEAN *)v8;
    }
LABEL_19:
    v4 = (unsigned __int64)v9 & -(__int64)(v10 != 0);
  }
  else
  {
    v4 = *(_QWORD *)(KeGetPrcb(a1[1]) + 35264);
  }
  if ( v4 )
  {
    v5 = *a1;
    if ( *(_DWORD *)(v4 + 460) == (_DWORD)v5 )
    {
      LODWORD(v4) = PpmReleaseLock((__int64 *)&PpmIdlePolicyLock.ThreadLock);
    }
    else
    {
      *(_DWORD *)(v4 + 460) = v5;
      LOBYTE(v5) = 1;
      LODWORD(v4) = PpmPerfUpdateDomainPolicy(v5);
    }
    if ( (unsigned int)PpmPerfDomainCount > 1 )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, v6, v7);
      v15 = 2048;
      LODWORD(v4) = PpmReapplyPerfPolicy(&v15);
    }
  }
  return v4;
}
