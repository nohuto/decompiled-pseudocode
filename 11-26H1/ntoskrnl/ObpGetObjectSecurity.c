/*
 * XREFs of ObpGetObjectSecurity @ 0x1408F5810
 * Callers:
 *     PspCheckJobAccessState @ 0x14077BB78 (PspCheckJobAccessState.c)
 *     PspAllocateNotificationChannel @ 0x1407FD498 (PspAllocateNotificationChannel.c)
 *     ObpCheckObjectReference @ 0x1408F4DF4 (ObpCheckObjectReference.c)
 *     ObpInsertOrLocateNamedObject @ 0x1408F50B0 (ObpInsertOrLocateNamedObject.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x140916DD4 (EtwpCheckCurrentUserProcessAccess.c)
 *     ObpCheckTraverseAccess @ 0x140918368 (ObpCheckTraverseAccess.c)
 *     MiAllowImageMap @ 0x140B2222C (MiAllowImageMap.c)
 *     PopBootStatAccessCheck @ 0x140B530B8 (PopBootStatAccessCheck.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x140934FB4 (ObpReferenceSecurityDescriptorSlow.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpGetObjectSecurity(__int64 a1, PVOID *a2, _BYTE *a3)
{
  ULONG_PTR v6; // rbp
  signed __int64 v7; // rdx
  char v8; // r9
  signed __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned int v11; // r9d
  __int64 result; // rax
  __int64 Pool2; // rax
  int v14; // r12d
  __int64 v15; // rax
  int v16; // [rsp+90h] [rbp+8h]

  v6 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  if ( *(_UNKNOWN **)(v6 + 152) != &SeDefaultObjectMethod )
  {
    v16 = ObpDefaultSecurityDescriptorLength;
    Pool2 = ExAllocatePool2(0x100uLL);
    *a2 = (PVOID)Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    *a3 = 1;
    v14 = guard_dispatch_icall_no_overrides(a1, 1LL);
    if ( v14 == -1073741789 )
    {
      ExFreePoolWithTag(*a2, 0);
      *a3 = 0;
      ObpDefaultSecurityDescriptorLength = v16;
      v15 = ExAllocatePool2(0x100uLL);
      *a2 = (PVOID)v15;
      if ( !v15 )
        return 3221225626LL;
      *a3 = 1;
      v14 = guard_dispatch_icall_no_overrides(a1, 1LL);
    }
    if ( v14 < 0 )
    {
      ExFreePoolWithTag(*a2, 0);
      *a2 = 0LL;
      result = (unsigned int)v14;
      *a3 = 0;
    }
    else
    {
      if ( !*a2 && ((*(_BYTE *)(v6 + 66) & 8) != 0 || (*(_BYTE *)(a1 - 22) & 2) != 0) )
        goto LABEL_20;
      return (unsigned int)v14;
    }
    return result;
  }
  _m_prefetchw((const void *)(a1 - 8));
  v7 = *(_QWORD *)(a1 - 8);
  v8 = v7;
  if ( (v7 & 0xF) != 0 )
  {
    do
    {
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 - 8), v7 - 1, v7);
      if ( v7 == v9 )
        break;
      v7 = v9;
      v8 = v9;
    }
    while ( (v9 & 0xF) != 0 );
  }
  v10 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
  v11 = v8 & 0xF;
  if ( v11 <= 1 && v10 )
    v10 = ObpReferenceSecurityDescriptorSlow(a1 - 48, v11, v10);
  *a2 = (PVOID)v10;
  *a3 = 0;
  if ( !*a2 && ((*(_BYTE *)(v6 + 66) & 8) != 0 || (*(_BYTE *)(a1 - 22) & 2) != 0) )
LABEL_20:
    KeBugCheckEx(0x189u, a1 - 48, v6, 1uLL, 0LL);
  return 0LL;
}
