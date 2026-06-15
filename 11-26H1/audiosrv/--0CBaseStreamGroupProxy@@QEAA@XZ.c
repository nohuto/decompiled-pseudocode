/*
 * XREFs of ??0CBaseStreamGroupProxy@@QEAA@XZ @ 0x18006F168
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCBaseStreamGroupProxy@@UIInspectable@@@WRL@Microsoft@@QEAA@XZ @ 0x18006F0DC (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCBaseStreamGroupProxy@@UIInspectable@.c)
 * Callees:
 *     <none>
 */

CBaseStreamGroupProxy *__fastcall CBaseStreamGroupProxy::CBaseStreamGroupProxy(CBaseStreamGroupProxy *this)
{
  CBaseStreamGroupProxy *result; // rax

  *(_QWORD *)this = &CBaseStreamGroupProxy::`vftable'{for `IStreamGroupProxy'};
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 1) = &CBaseStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioGraphCallback>'};
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 3, 0, 0);
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 176), 0, 0);
  result = this;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_BYTE *)this + 320) = 0;
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 84) = 0;
  return result;
}
