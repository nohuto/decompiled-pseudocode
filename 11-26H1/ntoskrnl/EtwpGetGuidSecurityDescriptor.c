/*
 * XREFs of EtwpGetGuidSecurityDescriptor @ 0x140920E70
 * Callers:
 *     EtwpAccessCheckFromState @ 0x140920BE0 (EtwpAccessCheckFromState.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x140920D60 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpInitializeSecurity @ 0x140CE1AF8 (EtwpInitializeSecurity.c)
 * Callees:
 *     ZwQueryValueKey @ 0x1407236D0 (ZwQueryValueKey.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     SeValidSecurityDescriptor @ 0x140A7C990 (SeValidSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpGetGuidSecurityDescriptor(UNICODE_STRING *a1, _QWORD *a2)
{
  void *Pool2; // rdi
  ULONG v4; // r15d
  struct _LIST_ENTRY *Blink; // r14
  void *v6; // rbx
  _DWORD *v7; // r13
  NTSTATUS v8; // esi
  int v9; // ebp
  unsigned int v11; // ebx
  void *v12; // rax
  ULONG v13; // eax
  int v15; // [rsp+78h] [rbp+10h]
  ULONG ResultLength; // [rsp+80h] [rbp+18h] BYREF

  Pool2 = 0LL;
  v4 = 512;
  v15 = 0;
  *a2 = 0LL;
  while ( 1 )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return 3221225626LL;
    Blink = ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
    v6 = *(void **)&ExpSysDbgLock.SchedulerAssistPriorityFloor;
    ResultLength = 0;
    if ( *(_OWORD *)&ExpSysDbgLock.InGlobalUpdateVpThreadPriorityList == 0LL )
    {
      v11 = -1073741811;
LABEL_18:
      ExFreePoolWithTag(Pool2, 0);
      return v11;
    }
    if ( v4 >= 0xFFFFFFF0 )
    {
      v11 = -1073741675;
      goto LABEL_18;
    }
    v7 = (_DWORD *)ExAllocatePool2(0x100uLL);
    if ( !v7 )
    {
      v11 = -1073741801;
      goto LABEL_18;
    }
    v8 = -1073741772;
    if ( !Blink
      || (v8 = ZwQueryValueKey(Blink, a1, KeyValuePartialInformation, v7, v4 + 16, &ResultLength), v8 == -1073741772) )
    {
      if ( !v6 )
        goto LABEL_14;
      v8 = ZwQueryValueKey(v6, a1, KeyValuePartialInformation, v7, v4 + 16, &ResultLength);
    }
    if ( (int)(v8 + 0x80000000) < 0 || v8 == -2147483643 )
    {
      v9 = v7[1];
      if ( v8 >= 0 )
      {
        v13 = v7[2];
        if ( v4 < v13 )
          v8 = -2147483643;
        else
          memmove(Pool2, v7 + 3, v13);
      }
      v4 = v7[2];
      goto LABEL_15;
    }
LABEL_14:
    v9 = v15;
LABEL_15:
    v15 = v9;
    ExFreePoolWithTag(v7, 0);
    if ( v8 != -2147483643 )
    {
      if ( v8 != -1073741789 )
      {
        v11 = v8;
        if ( v8 >= 0 && v9 == 3 )
        {
          if ( SeValidSecurityDescriptor(v4, Pool2) )
          {
            v12 = (void *)ExAllocatePool2(0x100uLL);
            *a2 = v12;
            if ( v12 )
            {
              memmove(v12, Pool2, v4);
              v11 = v8;
            }
            else
            {
              v11 = -1073741670;
            }
          }
          else
          {
            v11 = -1073741703;
          }
        }
        goto LABEL_18;
      }
      v15 = v9;
    }
  }
}
