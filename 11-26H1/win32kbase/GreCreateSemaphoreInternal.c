/*
 * XREFs of GreCreateSemaphoreInternal @ 0x1400A69FC
 * Callers:
 *     EngCreateSemaphore @ 0x1400A54B0 (EngCreateSemaphore.c)
 *     GreCreateSemaphore @ 0x1400A62B0 (GreCreateSemaphore.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1400C85F0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1401ED038 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     EngInitializeSafeSemaphore @ 0x1401F38A0 (EngInitializeSafeSemaphore.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001F3A0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     MultiUserGreTrackAddEngResource @ 0x140045220 (MultiUserGreTrackAddEngResource.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 */

char *__fastcall GreCreateSemaphoreInternal(char a1)
{
  char *v2; // rax
  char *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _GRETHREAD *CurrentThread; // rax

  v2 = (char *)Win32AllocPoolImpl(0x40uLL, 0x88uLL, 0x6D657347u);
  v3 = v2;
  if ( v2 )
  {
    v3 = v2 + 32;
    v4 = (__int64)v2;
    ExInitializeResourceLite((PERESOURCE)(v2 + 32));
    MultiUserGreTrackAddEngResource(v4, (a1 & 1) != 0 ? 4 : 1);
    if ( v3 )
    {
      *((_QWORD *)v3 - 1) = 0LL;
    }
    else
    {
      CurrentThread = GreGetCurrentThread(v6, v5);
      if ( CurrentThread )
        *(_QWORD *)((char *)CurrentThread + 340) = 0LL;
    }
  }
  return v3;
}
