/*
 * XREFs of ?Initialize@SfmState@@QEAAHXZ @ 0x1401B79B0
 * Callers:
 *     InitializeGre @ 0x1402F3768 (InitializeGre.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SfmState::Initialize(SfmState *this)
{
  _QWORD *v1; // rbx
  struct _OBJECT_ATTRIBUTES v3; // [rsp+30h] [rbp-38h] BYREF

  *(_QWORD *)&v3.Length = 48LL;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  v1 = (_QWORD *)((char *)this + 32);
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = (char *)this + 48;
  *((_QWORD *)this + 6) = (char *)this + 48;
  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)&v3.Attributes = 512LL;
  v3.RootDirectory = 0LL;
  v3.ObjectName = 0LL;
  *(_OWORD *)&v3.SecurityDescriptor = 0LL;
  if ( ZwCreateEvent((PHANDLE)this + 4, 0x1F0003u, &v3, NotificationEvent, 0) >= 0 )
    return 1LL;
  *v1 = 0LL;
  return 0LL;
}
