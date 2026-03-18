/*
 * XREFs of AccessBaseField @ 0x140004F30
 * Callers:
 *     AccessFieldData @ 0x1400047D0 (AccessFieldData.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     FindRSAccess @ 0x1400371C0 (FindRSAccess.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 AccessBaseField(__int64 a1, __int64 a2, unsigned int *a3, ...)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 *v7; // r11
  unsigned int v8; // r9d
  unsigned __int64 v10; // rsi
  unsigned int v11; // ecx
  unsigned int v12; // r10d
  unsigned int v13; // ecx
  __int64 v14; // r15
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rdx
  char v18; // r15
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  bool v22; // r12
  __int64 v23; // r9
  __int64 v24; // rcx
  char v25; // r15
  unsigned int i; // ebx
  __int64 v27; // rdi
  int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // r10d
  unsigned int v31; // r10d
  unsigned int v32; // ebx
  int (__fastcall *v33)(_QWORD, unsigned __int64, __int64 *, _QWORD, __int64 *); // rax
  __int64 v34; // rdi
  const char *v35; // r9
  int v36; // r8d
  bool v37; // cc
  const char *v38; // rdx
  int v39; // ecx
  int v40; // ecx
  char v42; // al
  unsigned __int64 v43; // r15
  __int64 (__fastcall *v44)(_QWORD, unsigned __int64, __int64 *, _QWORD, __int64 *); // rax
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rax
  size_t v48; // r14
  __int64 v49; // rdi
  int (__fastcall *v50)(_QWORD, unsigned __int64, __int64 **, _QWORD, __int64 *); // rax
  va_list v51; // rcx
  unsigned __int32 v52; // r8d
  char v53; // r15
  unsigned int j; // ebx
  __int64 v55; // rdi
  int v56; // ecx
  unsigned int v57; // eax
  const char *v58; // r9
  const char *v59; // rdx
  int v60; // ecx
  int v61; // ecx
  unsigned __int8 v62; // al
  unsigned int v63; // r8d
  __int64 RSAccess; // rax
  __int64 v65; // rbx
  char v66; // r15
  unsigned int v67; // eax
  char v68; // r15
  unsigned int k; // ebx
  __int64 v70; // rdi
  int v71; // ecx
  unsigned int v72; // eax
  const char *v73; // r9
  int v74; // r8d
  const char *v75; // rdx
  int v76; // ecx
  int v77; // ecx
  unsigned __int32 v78; // eax
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 *v82; // rax
  unsigned __int16 v83; // ax
  unsigned __int32 v84; // eax
  __int64 v85; // rcx
  void (__fastcall *v86)(__int64, _QWORD, _QWORD, __int64 *); // rax
  struct _DEVICE_OBJECT *v87; // rcx
  struct _IO_WORKITEM *v88; // rdi
  _DWORD *v89; // rax
  __int64 v90; // rcx
  void (__fastcall *v91)(__int64, _QWORD, _QWORD, __int64 *); // rax
  struct _DEVICE_OBJECT *v92; // rcx
  struct _IO_WORKITEM *v93; // rdi
  _DWORD *v94; // rax
  void (__fastcall *v95)(_QWORD, _QWORD, _QWORD, __int64 **); // rax
  struct _DEVICE_OBJECT *v96; // rcx
  struct _IO_WORKITEM *WorkItem; // rdi
  _DWORD *Pool2; // rax
  signed __int32 v99[8]; // [rsp+0h] [rbp-A1h] BYREF
  __int64 v100; // [rsp+20h] [rbp-81h]
  __int64 v101; // [rsp+50h] [rbp-51h] BYREF
  __int64 v102; // [rsp+58h] [rbp-49h]
  __int64 v103; // [rsp+60h] [rbp-41h]
  _QWORD v104[16]; // [rsp+70h] [rbp-31h] BYREF
  unsigned int v105; // [rsp+108h] [rbp+67h]
  __int64 *Src; // [rsp+118h] [rbp+77h] BYREF
  va_list Srca; // [rsp+118h] [rbp+77h]
  __int64 v108; // [rsp+120h] [rbp+7Fh] BYREF
  va_list va1; // [rsp+120h] [rbp+7Fh]
  va_list va2; // [rsp+128h] [rbp+87h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(Srca, a3);
  Src = va_arg(va1, __int64 *);
  va_copy(va2, va1);
  v108 = va_arg(va2, _QWORD);
  v3 = *(_QWORD *)(a2 + 96);
  v4 = 0LL;
  v5 = *a3;
  v7 = Src;
  v103 = 0LL;
  v8 = a3[3];
  v10 = *(_QWORD *)v3 + v5;
  v11 = v8 & 0xF;
  if ( (v8 & 0xF) != 0 && v11 <= 4 )
    v12 = 1 << (v11 - 1);
  else
    v12 = 1;
  v13 = a3[2];
  v14 = 0LL;
  v105 = v12;
  if ( v13 < 0x20 )
    v14 = 1LL << v13;
  v15 = (v14 - 1) << a3[1];
  v102 = v15;
  v16 = v15;
  if ( 8 * v12 < 0x20 )
    v4 = 1LL << (8 * (unsigned __int8)v12);
  v17 = v15;
  v18 = v108;
  v19 = v4 - 1;
  v20 = ~v17;
  v21 = *Src & v16;
  v22 = (v8 & 0x60) == 0 && (v20 & v19) != 0;
  *Src = v21;
  v101 = v21;
  v23 = v21;
  if ( !v18 )
  {
    v42 = a3[3] & 0x60;
    v101 = v21;
    if ( v42 == 32 )
    {
      v23 = v21 | v20;
      v101 = v21 | v20;
      *v7 = v21 | v20;
    }
  }
  v24 = *(unsigned __int8 *)(v3 + 12);
  if ( !*(_BYTE *)(v3 + 12) )
  {
    if ( v18 )
    {
      LODWORD(v108) = 0;
      v101 = 0LL;
      if ( v12 > 8 )
      {
        *v7 = -1LL;
        return 0;
      }
      if ( BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) )
      {
        v33 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, __int64 *))(PmHalDispatchTable + 144);
        if ( v33 )
        {
          if ( v33(0LL, v10, &v101, v12, (__int64 *)va1) >= 0 )
            goto LABEL_46;
          v12 = v105;
        }
      }
      if ( !(v10 % v12) )
      {
        switch ( v12 )
        {
          case 1u:
            v34 = *(unsigned __int8 *)v10;
            break;
          case 4u:
            *Src = (unsigned int)v102 & *(_DWORD *)v10;
            return 0;
          case 2u:
            *Src = (unsigned __int16)(v102 & *(_WORD *)v10);
            return 0;
          case 8u:
            *Src = v102 & *(_QWORD *)v10;
            return 0;
          default:
            v34 = -1LL;
            break;
        }
        *Src = v102 & v34;
        return 0;
      }
      memmove(&v101, (const void *)v10, v12);
LABEL_46:
      *Src = v102 & v101;
      return 0;
    }
    v43 = 0LL;
    if ( v22 )
    {
      LODWORD(v108) = 0;
      v101 = 0LL;
      if ( v12 > 8 )
      {
        v47 = -1LL;
      }
      else
      {
        if ( BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink)
          && (v44 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, __int64 *))(PmHalDispatchTable + 144)) != 0LL
          && (v45 = v44(0LL, v10, &v101, v12, (__int64 *)va1), v12 = v105, v45 >= 0) )
        {
          v46 = v101;
        }
        else if ( v10 % v12 )
        {
          memmove(&v101, (const void *)v10, v12);
          v46 = v101;
          v12 = v105;
        }
        else
        {
          switch ( v12 )
          {
            case 1u:
              v46 = *(unsigned __int8 *)v10;
              break;
            case 4u:
              v46 = *(unsigned int *)v10;
              break;
            case 2u:
              v46 = *(unsigned __int16 *)v10;
              break;
            case 8u:
              v46 = *(_QWORD *)v10;
              break;
            default:
              v46 = -1LL;
              break;
          }
        }
        v7 = Src;
        v47 = ~v102 & v46;
        v101 = v47;
      }
      *v7 |= v47;
      v23 = *v7;
      v101 = *v7;
    }
    LODWORD(v108) = 0;
    v104[4] = 0xFFFFFFFFLL;
    Src = 0LL;
    v104[0] = 0LL;
    v104[1] = 255LL;
    v104[2] = 0xFFFFLL;
    v104[3] = 0LL;
    memset(&v104[5], 0, 24);
    v104[8] = -1LL;
    if ( v12 > 8 )
      return 0;
    v48 = v12;
    v49 = v104[v12];
    if ( !BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink)
      || (v50 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 **, _QWORD, __int64 *))(PmHalDispatchTable + 144)) == 0LL )
    {
LABEL_67:
      if ( v10 % v48 )
      {
        if ( v19 != v49 )
        {
          memmove(Srca, (const void *)v10, v48);
          v23 = v101;
          v43 = (unsigned __int64)Src;
        }
        Src = (__int64 *)(v23 | v43 & ~v19);
        memmove((void *)v10, Srca, v48);
      }
      else
      {
        switch ( v12 )
        {
          case 1u:
            if ( v19 != v49 )
              v43 = *(unsigned __int8 *)v10;
            Src = (__int64 *)(v23 | v43 & ~v19);
            *(_BYTE *)v10 = (_BYTE)Src;
            _InterlockedOr(v99, 0);
            break;
          case 4u:
            if ( v19 != v49 )
              v43 = *(unsigned int *)v10;
            Src = (__int64 *)(v23 | v43 & ~v19);
            *(_DWORD *)v10 = (_DWORD)Src;
            _InterlockedOr(v99, 0);
            break;
          case 2u:
            if ( v19 != v49 )
              v43 = *(unsigned __int16 *)v10;
            Src = (__int64 *)(v23 | v43 & ~v19);
            *(_WORD *)v10 = (_WORD)Src;
            _InterlockedOr(v99, 0);
            break;
          case 8u:
            if ( v19 != v49 )
              v43 = *(_QWORD *)v10;
            Src = (__int64 *)(v23 | v43 & ~v19);
            *(_QWORD *)v10 = Src;
            KeFlushWriteBuffer();
            break;
        }
      }
      return 0;
    }
    if ( v19 != v49 )
    {
      if ( v50(0LL, v10, (__int64 **)Srca, v12, (__int64 *)va1) < 0 )
      {
LABEL_66:
        v43 = (unsigned __int64)Src;
        v23 = v101;
        v12 = v105;
        goto LABEL_67;
      }
      v43 = (unsigned __int64)Src;
      v23 = v101;
      v12 = v105;
    }
    va_copy(v51, va1);
    Src = (__int64 *)(v23 | v43 & ~v19);
    LOBYTE(v51) = 1;
    if ( (*(int (__fastcall **)(va_list, unsigned __int64, __int64 **, _QWORD, __int64 *))(PmHalDispatchTable + 144))(
           v51,
           v10,
           (__int64 **)Srca,
           v12,
           (__int64 *)va1) >= 0 )
      return 0;
    goto LABEL_66;
  }
  if ( (_DWORD)v24 == 1 )
  {
    if ( !v18 )
    {
      if ( !v22 )
        goto LABEL_12;
      LODWORD(v108) = 0;
      v52 = 0;
      v53 = 1;
      if ( !gpBadIOAddressList )
      {
LABEL_87:
        switch ( v12 )
        {
          case 1u:
            v62 = __inbyte(v10);
            v52 = v62;
            break;
          case 2u:
            v83 = __inword(v10);
            v52 = v83;
            break;
          case 4u:
            v84 = __indword(v10);
            v52 = v84;
            break;
        }
LABEL_89:
        v63 = ~(_DWORD)v102 & v52;
        *v7 = v63 | (unsigned __int64)*v7;
        v23 = *v7;
        LODWORD(v108) = v63;
LABEL_12:
        v25 = 1;
        LODWORD(Src) = v23;
        if ( gpBadIOAddressList )
        {
          for ( i = 0; ; ++i )
          {
            v27 = 24LL * i;
            v28 = *(_DWORD *)((char *)gpBadIOAddressList + v27 + 4);
            if ( !v28 )
              goto LABEL_18;
            v29 = *(_DWORD *)((char *)gpBadIOAddressList + v27);
            if ( (unsigned int)v10 >= v29 && (unsigned int)v10 < v28 + v29 )
              break;
          }
          LODWORD(v35) = 0;
          v36 = 0;
          v37 = *(_DWORD *)((char *)gpBadIOAddressList + v27 + 8) <= (unsigned int)gdwHighestOSVerQueried;
          LODWORD(v38) = v10;
          v100 = 0LL;
          if ( v37 )
          {
            v25 = 0;
            v39 = 25;
          }
          else
          {
            PrintDebugMessage(24, v10, 0, 0, v100);
            v95 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 **))((char *)gpBadIOAddressList + v27 + 16);
            if ( !v95 )
              goto LABEL_35;
            v25 = 0;
            v95(0LL, (unsigned int)v10, v105, (__int64 **)Srca);
            v35 = "Wrote";
            v100 = (unsigned int)Src;
            v38 = "write";
            v36 = v10;
            v39 = 23;
          }
          PrintDebugMessage(v39, (_DWORD)v38, v36, (_DWORD)v35, v100);
LABEL_35:
          if ( RootDeviceExtension && (v96 = *(struct _DEVICE_OBJECT **)(RootDeviceExtension + 768)) != 0LL )
          {
            WorkItem = IoAllocateWorkItem(v96);
            if ( WorkItem )
            {
              Pool2 = (_DWORD *)ExAllocatePool2(64LL, 24LL, 1231842625LL);
              if ( Pool2 )
              {
                *(_BYTE *)Pool2 = 0;
                Pool2[1] = v10;
                Pool2[2] = i;
                *((_QWORD *)Pool2 + 2) = WorkItem;
                IoQueueWorkItem(WorkItem, DelayedLogInErrorLog, DelayedWorkQueue, Pool2);
              }
              else
              {
                PrintDebugMessage(20, 0, 0, 0, 0LL);
                IoFreeWorkItem(WorkItem);
              }
              goto LABEL_38;
            }
            v40 = 21;
          }
          else
          {
            v40 = 22;
          }
          PrintDebugMessage(v40, 0, 0, 0, 0LL);
LABEL_38:
          if ( !v25 )
            return 0;
          LODWORD(v23) = (_DWORD)Src;
          v12 = v105;
        }
LABEL_18:
        v30 = v12 - 1;
        if ( v30 )
        {
          v31 = v30 - 1;
          if ( v31 )
          {
            v32 = 0;
            if ( v31 == 2 )
              __outdword(v10, v23);
            return v32;
          }
          __outword(v10, v23);
        }
        else
        {
          __outbyte(v10, v23);
        }
        return 0;
      }
      for ( j = 0; ; ++j )
      {
        v55 = 24LL * j;
        v56 = *(_DWORD *)((char *)gpBadIOAddressList + v55 + 4);
        if ( !v56 )
          goto LABEL_87;
        v57 = *(_DWORD *)((char *)gpBadIOAddressList + v55);
        if ( (unsigned int)v10 >= v57 && (unsigned int)v10 < v56 + v57 )
          break;
      }
      LODWORD(v58) = 0;
      v37 = *(_DWORD *)((char *)gpBadIOAddressList + v55 + 8) <= (unsigned int)gdwHighestOSVerQueried;
      LODWORD(v59) = v10;
      v100 = 0LL;
      if ( v37 )
      {
        v53 = 0;
        v60 = 25;
      }
      else
      {
        PrintDebugMessage(24, v10, 0, 0, v100);
        v91 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))((char *)gpBadIOAddressList + v55 + 16);
        if ( !v91 )
          goto LABEL_83;
        v53 = 0;
        LOBYTE(v90) = 1;
        v91(v90, (unsigned int)v10, v105, (__int64 *)va1);
        v58 = "Read";
        v100 = (unsigned int)v108;
        v59 = "read";
        v52 = v10;
        v60 = 23;
      }
      PrintDebugMessage(v60, (_DWORD)v59, v52, (_DWORD)v58, v100);
LABEL_83:
      if ( RootDeviceExtension && (v92 = *(struct _DEVICE_OBJECT **)(RootDeviceExtension + 768)) != 0LL )
      {
        v93 = IoAllocateWorkItem(v92);
        if ( v93 )
        {
          v94 = (_DWORD *)ExAllocatePool2(64LL, 24LL, 1231842625LL);
          if ( v94 )
          {
            *(_BYTE *)v94 = 1;
            v94[1] = v10;
            v94[2] = j;
            *((_QWORD *)v94 + 2) = v93;
            IoQueueWorkItem(v93, DelayedLogInErrorLog, DelayedWorkQueue, v94);
          }
          else
          {
            PrintDebugMessage(20, 0, 0, 0, 0LL);
            IoFreeWorkItem(v93);
          }
LABEL_86:
          v52 = v108;
          v7 = Src;
          v12 = v105;
          if ( !v53 )
            goto LABEL_89;
          goto LABEL_87;
        }
        v61 = 21;
      }
      else
      {
        v61 = 22;
      }
      PrintDebugMessage(v61, 0, 0, 0, 0LL);
      goto LABEL_86;
    }
    LODWORD(v108) = 0;
    v68 = 1;
    if ( gpBadIOAddressList )
    {
      for ( k = 0; ; ++k )
      {
        v70 = 24LL * k;
        v71 = *(_DWORD *)((char *)gpBadIOAddressList + v70 + 4);
        if ( !v71 )
          goto LABEL_113;
        v72 = *(_DWORD *)((char *)gpBadIOAddressList + v70);
        if ( (unsigned int)v10 >= v72 && (unsigned int)v10 < v71 + v72 )
          break;
      }
      LODWORD(v73) = 0;
      v74 = 0;
      v37 = *(_DWORD *)((char *)gpBadIOAddressList + v70 + 8) <= (unsigned int)gdwHighestOSVerQueried;
      LODWORD(v75) = v10;
      v100 = 0LL;
      if ( v37 )
      {
        v68 = 0;
        v76 = 25;
      }
      else
      {
        PrintDebugMessage(24, v10, 0, 0, v100);
        v86 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))((char *)gpBadIOAddressList + v70 + 16);
        if ( !v86 )
          goto LABEL_108;
        v68 = 0;
        LOBYTE(v85) = 1;
        v86(v85, (unsigned int)v10, v105, (__int64 *)va1);
        v73 = "Read";
        v100 = (unsigned int)v108;
        v75 = "read";
        v74 = v10;
        v76 = 23;
      }
      PrintDebugMessage(v76, (_DWORD)v75, v74, (_DWORD)v73, v100);
LABEL_108:
      if ( RootDeviceExtension && (v87 = *(struct _DEVICE_OBJECT **)(RootDeviceExtension + 768)) != 0LL )
      {
        v88 = IoAllocateWorkItem(v87);
        if ( v88 )
        {
          v89 = (_DWORD *)ExAllocatePool2(64LL, 24LL, 1231842625LL);
          if ( v89 )
          {
            *(_BYTE *)v89 = 1;
            v89[1] = v10;
            v89[2] = k;
            *((_QWORD *)v89 + 2) = v88;
            IoQueueWorkItem(v88, DelayedLogInErrorLog, DelayedWorkQueue, v89);
          }
          else
          {
            PrintDebugMessage(20, 0, 0, 0, 0LL);
            IoFreeWorkItem(v88);
          }
          goto LABEL_111;
        }
        v77 = 21;
      }
      else
      {
        v77 = 22;
      }
      PrintDebugMessage(v77, 0, 0, 0, 0LL);
LABEL_111:
      v78 = v108;
      v7 = Src;
      if ( !v68 )
        goto LABEL_115;
      v12 = v105;
      v103 = (unsigned int)v108;
    }
LABEL_113:
    switch ( v12 )
    {
      case 1u:
        LOBYTE(v78) = __inbyte(v10);
        v78 = (unsigned __int8)v78;
        break;
      case 2u:
        LOWORD(v78) = __inword(v10);
        v78 = (unsigned __int16)v78;
        break;
      case 4u:
        v78 = __indword(v10);
        break;
      default:
        v78 = v103;
        break;
    }
LABEL_115:
    v32 = 0;
    *v7 = v78 & (unsigned int)v102;
  }
  else
  {
    RSAccess = FindRSAccess(v24, v20, a3, v23);
    v65 = RSAccess;
    if ( RSAccess && *(_QWORD *)(RSAccess + 16) )
    {
      if ( v18 )
      {
        v66 = 0;
        if ( (gDebugger & 0x100) != 0 )
        {
          _m_prefetchw(&gDebugger);
          v66 = _InterlockedAnd(&gDebugger, 0xFFFFFFEF);
        }
        v67 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, _QWORD, __int64 *, _QWORD, __int64 (__fastcall *)(), __int64))(RSAccess + 16))(
                0LL,
                a2 + 120,
                v10,
                v105,
                Src,
                *(_QWORD *)(RSAccess + 24),
                RestartCtxtCallback,
                a1 + 328);
        v32 = v67;
        if ( (v66 & 0x10) != 0 )
          _InterlockedOr(&gDebugger, 0x10u);
        if ( v67 == 259 )
        {
          return 32772;
        }
        else if ( v67 )
        {
          LogError(3222536216LL);
          AcpiDiagTraceAmlError(a1, 3222536216LL);
          PrintDebugMessage(2, *(unsigned __int8 *)(v3 + 12), v32, 0, 0LL);
          return (unsigned int)-1072431080;
        }
      }
      else
      {
        v79 = HeapAlloc(a1 + 480, 1297237576LL, 96LL);
        v80 = v79;
        if ( v79 )
        {
          *(_QWORD *)(v79 + 8) = *(_QWORD *)(a1 + 416);
          v81 = v102;
          *(_QWORD *)(a1 + 416) = v79;
          *(_DWORD *)v79 = 1094931031;
          *(_QWORD *)(v79 + 24) = WriteCookAccess;
          v82 = Src;
          *(_QWORD *)(v80 + 32) = a2;
          *(_QWORD *)(v80 + 40) = v65;
          v32 = 0;
          *(_QWORD *)(v80 + 48) = v10;
          *(_DWORD *)(v80 + 56) = v105;
          *(_QWORD *)(v80 + 64) = *v82;
          *(_QWORD *)(v80 + 72) = v81;
          *(_BYTE *)(v80 + 88) = v22;
        }
        else
        {
          LogError(3222536194LL);
          v32 = -1072431102;
          AcpiDiagTraceAmlError(a1, 3222536194LL);
          PrintDebugMessage(153, 0, 0, 0, 0LL);
        }
      }
    }
    else
    {
      LogError(3222536208LL);
      v32 = -1072431088;
      AcpiDiagTraceAmlError(a1, 3222536208LL);
      PrintDebugMessage(1, *(unsigned __int8 *)(v3 + 12), 0, 0, 0LL);
    }
  }
  return v32;
}
