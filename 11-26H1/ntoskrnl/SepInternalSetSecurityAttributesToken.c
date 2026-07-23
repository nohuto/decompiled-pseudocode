/*
 * XREFs of SepInternalSetSecurityAttributesToken @ 0x1403AFC1C
 * Callers:
 *     SeSetSecurityAttributesTokenEx @ 0x14063F470 (SeSetSecurityAttributesTokenEx.c)
 *     SeSetSecurityAttributesToken @ 0x140B01C90 (SeSetSecurityAttributesToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403AFD64 (AuthzBasepSetSecurityAttributesToken.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     SepShouldSetDelinkFlags @ 0x140AD1140 (SepShouldSetDelinkFlags.c)
 */

__int64 __fastcall SepInternalSetSecurityAttributesToken(void *a1, KPROCESSOR_MODE a2, char a3, __int64 a4, __int64 a5)
{
  char v7; // bp
  NTSTATUS v8; // eax
  PERESOURCE *v9; // rbx
  int v10; // edi
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v13[12]; // [rsp+0h] [rbp-48h] BYREF
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  Object = 0LL;
  v7 = 0;
  v8 = ObReferenceObjectByHandle(a1, 0x80u, (POBJECT_TYPE)SeTokenObjectType, a2, &Object, 0LL);
  v9 = (PERESOURCE *)Object;
  v10 = v8;
  if ( v8 >= 0 )
  {
    if ( a4 )
    {
      if ( a3 || (unsigned __int8)SepShouldSetDelinkFlags(a4, a5) )
        v7 = 1;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(v9[6], 1u);
      _InterlockedOr(v13, 0);
      v10 = AuthzBasepSetSecurityAttributesToken(v9[97], a4, a5);
      if ( v10 >= 0 )
      {
        if ( v7 )
          *((_DWORD *)v9 + 50) |= 0x20000u;
        v9[7] = (PERESOURCE)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
      }
      _InterlockedOr(v13, 0);
      ExReleaseResourceLite(v9[6]);
      KeLeaveCriticalRegion();
    }
    else
    {
      v10 = -1073741811;
    }
  }
  if ( v9 )
    ObfDereferenceObjectWithTag(v9, 0x746C6644u);
  return (unsigned int)v10;
}
