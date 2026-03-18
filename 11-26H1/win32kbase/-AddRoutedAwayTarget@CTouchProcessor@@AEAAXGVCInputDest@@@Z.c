/*
 * XREFs of ?AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1401A06B8
 * Callers:
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1401A0FDC (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x14004C87C (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1400685B8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::AddRoutedAwayTarget(__int64 a1, __int16 a2, CInputDest *a3)
{
  __int64 *i; // rdi
  __int64 v7; // rax
  _QWORD *v8; // rbx
  __int64 *v9; // rdi
  __int64 v10; // rax

  if ( !tagDomLock::IsLockedShared((PERESOURCE *)(a1 + 32)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8594LL);
  for ( i = *(__int64 **)(a1 + 64); i != (__int64 *)(a1 + 64); i = (__int64 *)*i )
  {
    if ( *((_WORD *)i + 16) == a2 )
    {
      v7 = Win32AllocPoolZInitImpl(256LL, 0x88uLL, 0x6E616D55u);
      v8 = (_QWORD *)v7;
      if ( v7 )
      {
        CInputDest::operator=(v7 + 16, (__int64)a3);
        v9 = i + 35;
        v10 = *v9;
        if ( *(__int64 **)(*v9 + 8) != v9 )
          __fastfail(3u);
        *v8 = v10;
        v8[1] = v9;
        *(_QWORD *)(v10 + 8) = v8;
        *v9 = (__int64)v8;
      }
      break;
    }
  }
  CInputDest::~CInputDest(a3);
}
