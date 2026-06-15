/*
 * XREFs of ?RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18001AC84
 * Callers:
 *     ?UnregisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180020590 (-UnregisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006744 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18001ADA0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??R?$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z @ 0x180037E00 (--R-$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z.c)
 */

__int64 __fastcall CProcess::RemoveSession(CProcess *this, struct IAudioSessionInfo *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r11
  __int64 *v8; // rax
  __int64 v9; // r11
  __int64 *v10; // rbx
  __int64 v11; // rdx
  struct IAudioSessionInfo *v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v13 = a2;
  v5 = std::_Conditionally_enabled_hash<unsigned __int64,1>::operator()((unsigned __int8 *)&v13);
  v6 = *((_QWORD *)this + 11);
  v7 = *((_QWORD *)this + 14) & v5;
  v8 = (__int64 *)*((_QWORD *)this + 9);
  v9 = 2 * v7;
  v10 = *(__int64 **)(v6 + 8 * v9 + 8);
  if ( v10 == v8 )
  {
LABEL_2:
    v10 = 0LL;
  }
  else
  {
    while ( a2 != (struct IAudioSessionInfo *)v10[2] )
    {
      if ( v10 == *(__int64 **)(v6 + 8 * v9) )
        goto LABEL_2;
      v10 = (__int64 *)v10[1];
    }
  }
  if ( v10 )
  {
    if ( *(__int64 **)(v6 + 8 * v9 + 8) == v10 )
    {
      if ( *(__int64 **)(v6 + 8 * v9) == v10 )
        *(_QWORD *)(v6 + 8 * v9) = v8;
      else
        v8 = (__int64 *)v10[1];
      *(_QWORD *)(v6 + 8 * v9 + 8) = v8;
    }
    else if ( *(__int64 **)(v6 + 8 * v9) == v10 )
    {
      *(_QWORD *)(v6 + 8 * v9) = *v10;
    }
    v11 = *v10;
    --*((_QWORD *)this + 10);
    *(_QWORD *)v10[1] = v11;
    *(_QWORD *)(v11 + 8) = v10[1];
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v10 + 3);
    std::_Deallocate<16>(v10, 32LL);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
