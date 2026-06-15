/*
 * XREFs of ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z @ 0x180051EE0
 * Callers:
 *     ?OnPropertyValueChanged@CAudioSrv@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x180051EB0 (-OnPropertyValueChanged@CAudioSrv@@UEAAJPEBGU_tagpropertykey@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x180052188 (--0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??1?$unique_ptr@V_Facet_base@std@@U?$default_delete@V_Facet_base@std@@@2@@std@@QEAA@XZ @ 0x1800B06D0 (--1-$unique_ptr@V_Facet_base@std@@U-$default_delete@V_Facet_base@std@@@2@@std@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSrv::QueueOnDeviceWorkItem(
        CAudioSrv *this,
        const unsigned __int16 *a2,
        struct _tagpropertykey *a3,
        __int64 a4,
        char a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        wil::details::in1diag3 *a13,
        __int64 a14,
        int a15,
        int a16,
        char *a17)
{
  GUID *v20; // rax
  GUID *v21; // rsi
  DWORD pid; // ebx
  __int64 v23; // r14
  unsigned __int64 v24; // rcx
  _QWORD *v25; // rax
  int v26; // r8d
  _QWORD *i; // rcx
  __int64 *v28; // rcx
  __int64 v29; // rax
  __int64 **v30; // rax
  __int64 *v32; // rbp
  _DWORD *v33; // rbx
  __int64 *v34; // rdx
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  __int64 v38; // [rsp+0h] [rbp-68h] BYREF
  int v39[2]; // [rsp+20h] [rbp-48h] BYREF
  char *v40; // [rsp+28h] [rbp-40h]
  GUID fmtid; // [rsp+30h] [rbp-38h]
  ATL::CAtlException *v42; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v20 = (GUID *)operator new[](0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v21 = v20;
  if ( v20 )
  {
    fmtid = a3->fmtid;
    pid = a3->pid;
    COnDeviceWorkItem::COnDeviceWorkItem(v20, a2, 4LL);
    *(_QWORD *)&v21->Data1 = &COnDevicePropertyChangedWorkItem::`vftable';
    v21[2] = fmtid;
    v21[3].Data1 = pid;
  }
  else
  {
    v21 = 0LL;
  }
  *(_QWORD *)v39 = v21;
  if ( !v21 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6FC,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)0x8007000ELL);
    std::unique_ptr<std::_Facet_base>::~unique_ptr<std::_Facet_base>(v39);
    return 2147942414LL;
  }
  if ( !*(_DWORD *)(*(_QWORD *)v21->Data4 - 16LL) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6FD,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
      (const char *)0x8007000ELL);
    (**(void (__fastcall ***)(void *, __int64))&v21->Data1)(v21, 1LL);
    return 2147942414LL;
  }
  *(_QWORD *)&fmtid.Data1 = (char *)this + 112;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v40 = (char *)this + 112;
  v23 = *((_QWORD *)this + 20);
  if ( *((_QWORD *)this + 23) )
  {
LABEL_12:
    v28 = (__int64 *)*((_QWORD *)this + 23);
    v29 = *v28;
    v28[2] = (__int64)v21;
    *((_QWORD *)this + 23) = v29;
    v28[1] = v23;
    *v28 = 0LL;
    ++*((_QWORD *)this + 21);
    v30 = (__int64 **)*((_QWORD *)this + 20);
    if ( v30 )
      *v30 = v28;
    else
      *((_QWORD *)this + 19) = v28;
    *((_QWORD *)this + 20) = v28;
    *(_QWORD *)v39 = 0LL;
    if ( this != (CAudioSrv *)-112LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 72LL))(
      ThreadPool,
      *((_QWORD *)this + 25));
    return 0LL;
  }
  v24 = *((unsigned int *)this + 48);
  if ( !*((_DWORD *)this + 48) )
    goto LABEL_9;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v24 < 0x18 )
    goto LABEL_29;
  while ( 1 )
  {
    v24 *= 24LL;
LABEL_9:
    v25 = malloc(v24 + 8);
    if ( v25 )
    {
      *v25 = *((_QWORD *)this + 22);
      *((_QWORD *)this + 22) = v25;
      v26 = *((_DWORD *)this + 48) - 1;
      for ( i = &v25[2 * v26 + 1 + (unsigned int)v26]; v26 >= 0; --v26 )
      {
        *i = *((_QWORD *)this + 23);
        *((_QWORD *)this + 23) = i;
        i -= 3;
      }
      goto LABEL_12;
    }
LABEL_29:
    try
    {
      ATL::AtlThrowImpl(-2147024882);
    }
    catch ( ATL::CAtlException *v42 )
    {
      v34 = &v38;
      v32 = v34;
      v33 = (_DWORD *)v34[8];
      if ( *v33 == -1073741571 )
        _o__resetstkoflw();
      *((_DWORD *)v32 + 34) = *v33;
      return sub_180052130(v35, (int)v34, v36, v37, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
    }
  }
}
