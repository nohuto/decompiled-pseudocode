/*
 * XREFs of ?OnCallback@CoreMsgObject@CoreMessagingK@@SAJW4_WIN32_CALLOUTS_OPERATION@@PEAX@Z @ 0x1400FD444
 * Callers:
 *     CoreMsgObjectCallout @ 0x1400FD334 (CoreMsgObjectCallout.c)
 * Callees:
 *     ?Open@CoreMsgObject@CoreMessagingK@@CAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1400FE754 (-Open@CoreMsgObject@CoreMessagingK@@CAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CoreMessagingK::CoreMsgObject::OnCallback(int a1, __int64 a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  unsigned int v5; // ebx

  v2 = a1 - 33;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 != 1 )
          return (unsigned int)-1073741585;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL) + 16LL))(*(_QWORD *)(a2 + 16) + 8LL);
      }
      return 0;
    }
    else
    {
      v5 = 0;
      if ( *(_BYTE *)(a2 + 40) && (unsigned int)PsGetProcessSessionIdEx(*(_QWORD *)(a2 + 16)) == -1 )
        return (unsigned int)-1073741790;
    }
  }
  else
  {
    return (unsigned int)CoreMessagingK::CoreMsgObject::Open((struct _WIN32_OPENMETHOD_PARAMETERS *)a2);
  }
  return v5;
}
