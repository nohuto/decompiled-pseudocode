/*
 * XREFs of EtwpGetGuidSecurityDescriptor @ 0x1408FC980
 * Callers:
 *     EtwpAccessCheckFromState @ 0x1408FC6F0 (EtwpAccessCheckFromState.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1408FC870 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpInitializeSecurity @ 0x140CE7E98 (EtwpInitializeSecurity.c)
 * Callees:
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     SeValidSecurityDescriptor @ 0x140A8DAC0 (SeValidSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpGetGuidSecurityDescriptor(UNICODE_STRING *a1, _QWORD *a2)
{
  void *Pool2; // rdi
  ULONG v4; // r15d
  void *v5; // r14
  _KTHREAD_WPS_FEEDBACK *WpsFeedback; // rbx
  _DWORD *v7; // r13
  NTSTATUS v8; // esi
  int v9; // ebp
  unsigned int v10; // ebx
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
    v5 = (void *)ExpSysDbgLock.Spare35[0];
    WpsFeedback = ExpSysDbgLock.WpsFeedback;
    ResultLength = 0;
    if ( !ExpSysDbgLock.Spare35[0] && !ExpSysDbgLock.WpsFeedback )
    {
      v10 = -1073741811;
      goto LABEL_18;
    }
    if ( v4 >= 0xFFFFFFF0 )
    {
      v10 = -1073741675;
LABEL_18:
      ExFreePoolWithTag(Pool2, 0);
      return v10;
    }
    v7 = (_DWORD *)ExAllocatePool2(0x100uLL);
    if ( !v7 )
    {
      v10 = -1073741801;
      goto LABEL_18;
    }
    v8 = -1073741772;
    if ( !v5
      || (v8 = ZwQueryValueKey(v5, a1, KeyValuePartialInformation, v7, v4 + 16, &ResultLength), v8 == -1073741772) )
    {
      if ( !WpsFeedback )
        goto LABEL_14;
      v8 = ZwQueryValueKey(WpsFeedback, a1, KeyValuePartialInformation, v7, v4 + 16, &ResultLength);
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
        v10 = v8;
        if ( v8 >= 0 && v9 == 3 )
        {
          if ( SeValidSecurityDescriptor(v4, Pool2) )
          {
            v12 = (void *)ExAllocatePool2(0x100uLL);
            *a2 = v12;
            if ( v12 )
            {
              memmove(v12, Pool2, v4);
              v10 = v8;
            }
            else
            {
              v10 = -1073741670;
            }
          }
          else
          {
            v10 = -1073741703;
          }
        }
        goto LABEL_18;
      }
      v15 = v9;
    }
  }
}
