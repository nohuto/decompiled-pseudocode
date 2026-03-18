/*
 * XREFs of ?OnInternalIoctl@MonitorDescriptorState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x1403EB0C8
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_KK@Z @ 0x140402F6C (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_KK@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140061C24 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?MonitorLogBadEDID@@YAXJ@Z @ 0x1403EBA64 (-MonitorLogBadEDID@@YAXJ@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::OnInternalIoctl(
        DxgMonitor::MonitorDescriptorState *this,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4,
        unsigned int a5,
        char *a6,
        unsigned __int64 *a7)
{
  int v10; // edi
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  __int16 v18; // si
  unsigned __int64 v19; // r13
  _WORD *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  __int64 v27; // rcx
  __int64 v29; // rcx
  char *v30; // rdx
  unsigned int v31; // ecx
  char v32; // al
  unsigned __int64 v33; // rax
  __int128 v34; // xmm1
  unsigned __int64 *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  _WORD *v38; // rbx
  __int64 v39; // rcx
  int v40; // edi
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  _BYTE *v44; // rbx
  _WORD *v45; // rbx
  void *v46; // rbx
  _WORD *v47; // rbx
  __int64 v48; // rcx
  __int64 v49; // rcx
  unsigned __int64 v50; // rbx
  _WORD *v51; // rdx
  unsigned int v52; // [rsp+30h] [rbp-71h] BYREF
  void *v53; // [rsp+38h] [rbp-69h] BYREF
  int v54; // [rsp+40h] [rbp-61h] BYREF
  __int16 v55; // [rsp+44h] [rbp-5Dh]
  unsigned __int64 *v56; // [rsp+48h] [rbp-59h]
  _QWORD v57[2]; // [rsp+50h] [rbp-51h] BYREF
  _QWORD v58[2]; // [rsp+60h] [rbp-41h] BYREF
  _QWORD v59[2]; // [rsp+70h] [rbp-31h] BYREF
  __int128 v60; // [rsp+80h] [rbp-21h] BYREF
  __int128 v61; // [rsp+90h] [rbp-11h]

  v53 = a6;
  v56 = a7;
  v10 = -1073741637;
  v11 = (unsigned int)a2;
  v12 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v12 + 24) = v11;
  *(_QWORD *)(v12 + 32) = this;
  WdLogGlobalForLineNumber = 835;
  v13 = v11 - 2302979;
  if ( !v13 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 840;
    return (unsigned int)v10;
  }
  v14 = v13 - 12;
  if ( !v14 )
  {
    v36 = *((_QWORD *)this + 20);
    if ( v36 )
    {
      if ( a3 < 0x10 || a5 < 0x10 )
        return (unsigned int)-1073741789;
      v52 = 0;
      v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD, _QWORD))(*(_QWORD *)v36 + 192LL))(
              v36,
              &v52,
              0LL,
              0LL);
      if ( (int)(v10 + 0x80000000) >= 0 && v10 != -1073741789 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 880;
        return (unsigned int)v10;
      }
      if ( v52 )
      {
        v19 = 56LL * (v52 - 1) + 60;
        if ( *a4 >= v19 )
        {
          v37 = *((_QWORD *)this + 20);
          v38 = (_WORD *)a4[1];
          v54 = 0;
          v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *, int *, _WORD *))(*(_QWORD *)v37 + 192LL))(
                  v37,
                  &v52,
                  &v54,
                  v38 + 2);
          if ( v10 < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 922;
            return (unsigned int)v10;
          }
          *v38 = v52;
          v38[1] = v54;
          goto LABEL_103;
        }
LABEL_102:
        v10 = -2147483643;
LABEL_103:
        *(_QWORD *)v53 = v19;
        goto LABEL_104;
      }
    }
    return (unsigned int)-1071841279;
  }
  v15 = v14 - 4;
  if ( !v15 )
  {
    v49 = *((_QWORD *)this + 20);
    if ( !v49 )
      return (unsigned int)-1071841279;
    if ( a3 < 0x10 || a5 < 0x10 )
      return (unsigned int)-1073741789;
    LOWORD(v52) = 0;
    v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *, _QWORD))(*(_QWORD *)v49 + 200LL))(v49, &v52, 0LL);
    if ( v10 == -1073741275 )
      return (unsigned int)-1071841279;
    if ( (int)(v10 + 0x80000000) >= 0 && v10 != -1073741789 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 997;
      return (unsigned int)v10;
    }
    v50 = 52LL * (unsigned __int16)v52 + 4;
    if ( *a4 < v50 )
    {
      v10 = -2147483643;
    }
    else
    {
      v51 = (_WORD *)a4[1];
      *v51 = v52;
      v10 = (*(__int64 (__fastcall **)(_QWORD, _WORD *, _WORD *))(**((_QWORD **)this + 20) + 200LL))(
              *((_QWORD *)this + 20),
              v51,
              v51 + 2);
      if ( v10 < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1026;
        return (unsigned int)v10;
      }
    }
    *(_QWORD *)v53 = v50;
    goto LABEL_104;
  }
  v16 = v15 - 4;
  if ( v16 )
  {
    v17 = v16 - 4;
    if ( !v17 )
    {
      v18 = 0;
      if ( *((_QWORD *)this + 20) )
      {
        if ( a3 >= 0x10 && a5 >= 0x10 )
        {
          v19 = 130LL;
          if ( *a4 >= 0x82 )
          {
            v20 = (_WORD *)a4[1];
            memset(v20, 0, *a4);
            v21 = *((_QWORD *)this + 20);
            v57[0] = 0x200000LL;
            v57[1] = v20;
            v10 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v21 + 72LL))(v21, v57);
            if ( v10 < 0 )
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 1167;
              goto LABEL_14;
            }
            v22 = *((_QWORD *)this + 20);
            v58[1] = v20 + 16;
            v58[0] = 0x200000LL;
            v23 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v22 + 80LL))(v22, v58);
            v10 = v23;
            if ( v23 == -1073741275 )
            {
              WdLogSingleEntry0(7LL);
              WdLogGlobalForLineNumber = 1186;
            }
            else if ( v23 < 0 )
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 1192;
LABEL_14:
              MonitorLogBadEDID(v10);
              return (unsigned int)v10;
            }
            v39 = *((_QWORD *)this + 20);
            v59[1] = v20 + 32;
            v59[0] = 0x200000LL;
            v10 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v39 + 64LL))(v39, v59);
            if ( v10 < 0 )
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 1206;
              goto LABEL_14;
            }
            v40 = (*(__int64 (__fastcall **)(_QWORD, _WORD *, _WORD *))(**((_QWORD **)this + 20) + 88LL))(
                    *((_QWORD *)this + 20),
                    v20 + 48,
                    v20 + 49);
            if ( v40 < 0 )
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 1220;
              MonitorLogBadEDID(v40);
            }
            v41 = *((_QWORD *)this + 20);
            *((_QWORD *)&v60 + 1) = v20 + 51;
            *(_QWORD *)&v60 = 1835008LL;
            v42 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v41 + 104LL))(v41, &v60);
            v10 = v42;
            if ( v42 == -1073741275 )
            {
              WdLogSingleEntry0(7LL);
              WdLogGlobalForLineNumber = 1243;
              v10 = 0;
            }
            else
            {
              if ( v42 < 0 )
              {
                WdLogSingleEntry1(3LL);
                WdLogGlobalForLineNumber = 1251;
                MonitorLogBadEDID(v10);
                v20[50] = 0;
                return (unsigned int)v10;
              }
              v18 = 13;
            }
            v20[50] = v18;
            goto LABEL_103;
          }
          goto LABEL_102;
        }
        return (unsigned int)-1073741789;
      }
      return (unsigned int)-1071841279;
    }
    v24 = v17 - 4;
    if ( !v24 )
    {
      if ( *((_QWORD *)this + 20) )
      {
        if ( a3 >= 0x10 && a5 >= 0x10 )
        {
          if ( *a4 < 0x10 )
          {
            v10 = -2147483643;
          }
          else
          {
            v47 = (_WORD *)a4[1];
            memset(v47, 0, *a4);
            v48 = *((_QWORD *)this + 20);
            v60 = 0LL;
            v61 = 0LL;
            v10 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v48 + 120LL))(v48, &v60);
            if ( v10 >= 0 )
            {
              *v47 = (unsigned __int16)v60 >> 2;
              v47[1] = WORD2(v60) >> 2;
              v47[4] = WORD4(v60) >> 2;
              v47[5] = WORD6(v60) >> 2;
              v47[2] = (unsigned __int16)v61 >> 2;
              v47[3] = WORD2(v61) >> 2;
              v47[6] = WORD4(v61) >> 2;
              v47[7] = WORD6(v61) >> 2;
            }
            else
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 1321;
              MonitorLogBadEDID(v10);
            }
          }
          *(_QWORD *)v53 = 16LL;
          goto LABEL_104;
        }
        return (unsigned int)-1073741789;
      }
      return (unsigned int)-1071841279;
    }
    v25 = v24 - 4;
    if ( !v25 )
    {
      if ( *((_QWORD *)this + 20) )
      {
        if ( a3 >= 0x10 && a5 >= 0x10 )
        {
          if ( *a4 < 0xB )
          {
            v10 = -2147483643;
          }
          else
          {
            v46 = (void *)a4[1];
            memset(v46, 0, *a4);
            v10 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 20) + 136LL))(
                    *((_QWORD *)this + 20),
                    v46);
            if ( v10 < 0 )
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 1393;
              MonitorLogBadEDID(v10);
            }
          }
          *(_QWORD *)v53 = 11LL;
          goto LABEL_104;
        }
        return (unsigned int)-1073741789;
      }
      return (unsigned int)-1071841279;
    }
    v26 = v25 - 4;
    if ( v26 )
    {
      if ( v26 != 4 )
        return (unsigned int)v10;
      v43 = *((_QWORD *)this + 20);
      if ( !v43 )
        return (unsigned int)-1071841279;
      if ( a3 < 0x10 || a5 < 0x10 )
        return (unsigned int)-1073741789;
      LOBYTE(v52) = 0;
      v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v43 + 152LL))(v43, &v52);
      if ( v10 < 0 )
      {
        if ( v10 == -1073741275 )
          return (unsigned int)v10;
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 1521;
        goto LABEL_14;
      }
      if ( *a4 )
      {
        v44 = (_BYTE *)a4[1];
        memset(v44, 0, *a4);
        *v44 = v52;
      }
      else
      {
        v10 = -2147483643;
      }
      *(_QWORD *)v53 = 1LL;
    }
    else
    {
      v27 = *((_QWORD *)this + 20);
      if ( !v27 )
        return (unsigned int)-1071841279;
      if ( a3 < 0x10 || a5 < 0x10 )
        return (unsigned int)-1073741789;
      v54 = 0;
      v55 = 0;
      v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v27 + 144LL))(v27, &v54);
      if ( v10 < 0 )
      {
        if ( v10 == -1073741275 )
          return (unsigned int)v10;
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 1450;
        goto LABEL_14;
      }
      if ( *a4 < 6 )
      {
        v10 = -2147483643;
      }
      else
      {
        v45 = (_WORD *)a4[1];
        memset(v45, 0, *a4);
        *(_DWORD *)v45 = v54;
        v45[2] = v55;
      }
      *(_QWORD *)v53 = 6LL;
    }
LABEL_104:
    *v56 = 16LL;
    return (unsigned int)v10;
  }
  v29 = *((_QWORD *)this + 16);
  if ( !v29 )
    return (unsigned int)-1071841279;
  if ( a3 < 0x88 || a5 < 0x88 )
    return (unsigned int)-1073741789;
  v52 = 0;
  (*(void (__fastcall **)(__int64, void **, unsigned int *))(*(_QWORD *)v29 + 232LL))(v29, &v53, &v52);
  v30 = (char *)v53;
  if ( v53 && v52 >= 0x80 && (v31 = *(unsigned __int8 *)a4, v31 < v52 >> 7) )
  {
    *a6 = v31;
    v10 = 0;
    v32 = *(_BYTE *)a4;
    *((_DWORD *)a6 + 33) = 2;
    a6[1] = v32 != 0 ? -1 : 1;
    v33 = (unsigned __int64)*(unsigned __int8 *)a4 << 7;
    *(_OWORD *)(a6 + 2) = *(_OWORD *)&v30[v33];
    *(_OWORD *)(a6 + 18) = *(_OWORD *)&v30[v33 + 16];
    *(_OWORD *)(a6 + 34) = *(_OWORD *)&v30[v33 + 32];
    *(_OWORD *)(a6 + 50) = *(_OWORD *)&v30[v33 + 48];
    *(_OWORD *)(a6 + 66) = *(_OWORD *)&v30[v33 + 64];
    *(_OWORD *)(a6 + 82) = *(_OWORD *)&v30[v33 + 80];
    *(_OWORD *)(a6 + 98) = *(_OWORD *)&v30[v33 + 96];
    v34 = *(_OWORD *)&v30[v33 + 112];
    v35 = v56;
    v53 = 0LL;
    *(_OWORD *)(a6 + 114) = v34;
    *v35 = 136LL;
    if ( v30 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v30);
  }
  else
  {
    v10 = -1071841279;
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v53);
  }
  return (unsigned int)v10;
}
