/*
 * XREFs of ??1EFSMEMOBJ@@QEAA@XZ @ 0x1400FF6D4
 * Callers:
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVXDCOBJ@@PEAKPEAX@Z @ 0x1400FEF94 (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVXDCOBJ@@PEAKPEAX@Z.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVXDCOBJ@@PEAKPEAX@Z @ 0x1401D5F14 (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 *     ?bGrow@EFSOBJ@@QEAAHXZ @ 0x1401D63B0 (-bGrow@EFSOBJ@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall EFSMEMOBJ::~EFSMEMOBJ(EFSMEMOBJ *this)
{
  __int64 v1; // rax
  _DWORD *v3; // rcx
  ULONG v4; // ecx

  v1 = *(_QWORD *)this;
  v3 = (_DWORD *)*((_QWORD *)this + 8);
  if ( v1 )
  {
    *v3 = *(_DWORD *)(v1 + 112);
    v4 = *(_DWORD *)(*(_QWORD *)this + 28LL);
    if ( v4 )
      EngSetLastError(v4);
    FreeTmpBuffer(*(_QWORD *)this);
  }
  else
  {
    *v3 = 0;
    EngSetLastError(0xEu);
  }
}
