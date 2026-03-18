/*
 * XREFs of ?RemoveHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z @ 0x14027875C
 * Callers:
 *     ?_HandleUsb4HRPnPNotification@USB4_HOSTROUTER_MGR@@CAJPEAX0@Z @ 0x140279580 (-_HandleUsb4HRPnPNotification@USB4_HOSTROUTER_MGR@@CAJPEAX0@Z.c)
 * Callees:
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ??_GUSB4_HOST_ROUTER@@QEAAPEAXI@Z @ 0x140098AE4 (--_GUSB4_HOST_ROUTER@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall USB4_HOSTROUTER_MGR::RemoveHostRouter(USB4_HOSTROUTER_MGR *this, const struct _UNICODE_STRING *a2)
{
  struct _UNICODE_STRING **v3; // rdi
  struct _UNICODE_STRING *i; // rbx
  __int64 v5; // rcx
  wchar_t *Buffer; // rax
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _UNICODE_STRING **)((char *)this + 56);
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v8, (USB4_HOSTROUTER_MGR *)((char *)this + 8));
  for ( i = *v3; ; i = *(struct _UNICODE_STRING **)&i->Length )
  {
    if ( i == (struct _UNICODE_STRING *)v3 )
      goto LABEL_10;
    if ( RtlEqualUnicodeString(a2, i + 1, 0) )
      break;
  }
  if ( !i )
  {
LABEL_10:
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 676;
    MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v8);
    return 3221226021LL;
  }
  v5 = *(_QWORD *)&i->Length;
  if ( *(struct _UNICODE_STRING **)(*(_QWORD *)&i->Length + 8LL) != i
    || (Buffer = i->Buffer, *(struct _UNICODE_STRING **)Buffer != i) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)Buffer = v5;
  *(_QWORD *)(v5 + 8) = Buffer;
  USB4_HOST_ROUTER::`scalar deleting destructor'(i);
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v8);
  return 0LL;
}
