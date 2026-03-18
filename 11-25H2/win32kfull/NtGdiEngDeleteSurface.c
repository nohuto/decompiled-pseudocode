/*
 * XREFs of NtGdiEngDeleteSurface @ 0x140263EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ?ValidUmpdHsurfAndUnSecure@@YAHPEAUHSURF__@@@Z @ 0x14026E3B4 (-ValidUmpdHsurfAndUnSecure@@YAHPEAUHSURF__@@@Z.c)
 *     Feature_Servicing_EngCreateBitmapMemoryLeak__private_IsEnabledDeviceUsageNoInline @ 0x14033AE60 (Feature_Servicing_EngCreateBitmapMemoryLeak__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtGdiEngDeleteSurface(HSURF a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  struct _GRETHREAD *CurrentThread; // rax
  struct W32_PUSH_LOCK *v7[15]; // [rsp+20h] [rbp-78h] BYREF

  v4 = 0;
  if ( (unsigned int)Feature_Servicing_EngCreateBitmapMemoryLeak__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentThread = GreGetCurrentThread(v3, v2);
    UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v7, CurrentThread);
    if ( (unsigned int)ValidUmpdHsurfAndUnSecure(a1) )
      v4 = EngDeleteSurface(a1);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v7);
  }
  else if ( (unsigned int)ValidUmpdHsurfAndUnSecure(a1) )
  {
    return EngDeleteSurface(a1);
  }
  return v4;
}
