/*
 * XREFs of ??0EFSMEMOBJ@@QEAA@AEBUPARAMETERS@EFSTATE@@KKPEAXPEAK@Z @ 0x14010235C
 * Callers:
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVXDCOBJ@@PEAKPEAX@Z @ 0x1400B8D04 (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVXDCOBJ@@PEAKPEAX@Z.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVXDCOBJ@@PEAKPEAX@Z @ 0x140101BF8 (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 *     ?bGrow@EFSOBJ@@QEAAHXZ @ 0x140102268 (-bGrow@EFSOBJ@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

EFSMEMOBJ *__fastcall EFSMEMOBJ::EFSMEMOBJ(
        EFSMEMOBJ *this,
        const struct EFSTATE::PARAMETERS *a2,
        unsigned int a3,
        int a4,
        void *a5,
        unsigned int *a6)
{
  __int64 v8; // rdi
  __int64 v10; // rax
  int v11; // r8d
  __int64 v12; // rax

  *((_QWORD *)this + 8) = a6;
  v8 = a3;
  if ( a3 > 0x1FFFFFF1 )
  {
    *(_QWORD *)this = 0LL;
  }
  else
  {
    v10 = AllocFreeTmpBuffer(8 * a3 + 116);
    *(_QWORD *)this = v10;
    if ( v10 )
    {
      v11 = *a6;
      *(_QWORD *)(v10 + 88) = v10 + 116;
      *(_QWORD *)(*(_QWORD *)this + 104LL) = *(_QWORD *)this + 116LL;
      *(_QWORD *)(*(_QWORD *)this + 96LL) = *(_QWORD *)this + 8 * v8 + 116;
      **(_QWORD **)this = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 8LL) = a4;
      *(_DWORD *)(*(_QWORD *)this + 112LL) = 0;
      *(_QWORD *)(*(_QWORD *)this + 16LL) = a5;
      *(_DWORD *)(*(_QWORD *)this + 24LL) = v11;
      *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
      v12 = *(_QWORD *)this;
      *(_OWORD *)(v12 + 32) = *(_OWORD *)a2;
      *(_OWORD *)(v12 + 48) = *((_OWORD *)a2 + 1);
      *(_OWORD *)(v12 + 64) = *((_OWORD *)a2 + 2);
      *(_QWORD *)(v12 + 80) = *((_QWORD *)a2 + 6);
    }
  }
  return this;
}
