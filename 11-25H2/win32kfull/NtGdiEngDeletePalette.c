/*
 * XREFs of NtGdiEngDeletePalette @ 0x140263E10
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1401853D0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1401C612C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     Feature_Servicing_EngCreateBitmapMemoryLeak__private_IsEnabledDeviceUsageNoInline @ 0x14033AE60 (Feature_Servicing_EngCreateBitmapMemoryLeak__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtGdiEngDeletePalette(HPALETTE a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _GRETHREAD *CurrentThread; // rax
  unsigned int v5; // ebx
  struct W32_PUSH_LOCK *v7[15]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v8; // [rsp+A8h] [rbp+10h] BYREF

  if ( (unsigned int)Feature_Servicing_EngCreateBitmapMemoryLeak__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentThread = GreGetCurrentThread(v3, v2);
    UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v7, CurrentThread);
    EPALOBJ::EPALOBJ((EPALOBJ *)&v8, a1);
    if ( v8 && (*(_DWORD *)(v8 + 24) & 0x2000000) != 0 )
      v5 = EngDeletePaletteInternal((struct EPALOBJ *)&v8);
    else
      v5 = 0;
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v8);
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v7);
  }
  else
  {
    EPALOBJ::EPALOBJ((EPALOBJ *)&v8, a1);
    if ( v8 && (*(_DWORD *)(v8 + 24) & 0x2000000) != 0 )
      v5 = EngDeletePaletteInternal((struct EPALOBJ *)&v8);
    else
      v5 = 0;
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v8);
  }
  return v5;
}
