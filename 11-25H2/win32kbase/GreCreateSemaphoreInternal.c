/*
 * XREFs of GreCreateSemaphoreInternal @ 0x140027848
 * Callers:
 *     GreCreateSemaphore @ 0x140027AC0 (GreCreateSemaphore.c)
 *     EngCreateSemaphore @ 0x1400281A0 (EngCreateSemaphore.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x140073820 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x14019E28C (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     EngInitializeSafeSemaphore @ 0x1401C7A50 (EngInitializeSafeSemaphore.c)
 * Callees:
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     MultiUserGreTrackAddEngResource @ 0x140047880 (MultiUserGreTrackAddEngResource.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14008EDD0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

__int64 __fastcall GreCreateSemaphoreInternal(char a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rbx
  struct _GRETHREAD *CurrentThread; // rax

  v2 = Win32AllocPoolImpl(64LL, 0x88uLL, 0x6D657347u);
  v3 = v2;
  if ( v2 )
  {
    v3 = v2 + 32;
    v4 = v2;
    ExInitializeResourceLite((PERESOURCE)(v2 + 32));
    MultiUserGreTrackAddEngResource(v4, (a1 & 1) != 0 ? 4 : 1);
    if ( v3 )
    {
      *(_QWORD *)(v3 - 8) = 0LL;
    }
    else
    {
      CurrentThread = GreGetCurrentThread();
      if ( CurrentThread )
      {
        *((_DWORD *)CurrentThread + 87) = 0;
        *((_DWORD *)CurrentThread + 88) = 0;
      }
    }
  }
  return v3;
}
