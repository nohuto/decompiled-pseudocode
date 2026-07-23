/*
 * XREFs of RtlUnwindEx @ 0x1402CA550
 * Callers:
 *     RtlUnwind @ 0x1403D95A0 (RtlUnwind.c)
 *     __C_specific_handler @ 0x140535BE0 (__C_specific_handler.c)
 *     KiSystemServiceHandler @ 0x140740100 (KiSystemServiceHandler.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x140263230 (RtlpGetStackLimits.c)
 *     KeQueryCurrentStackInformationEx @ 0x1402634E0 (KeQueryCurrentStackInformationEx.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     RtlpCopyContext @ 0x1402CB010 (RtlpCopyContext.c)
 *     RtlVirtualUnwind2 @ 0x1402CB250 (RtlVirtualUnwind2.c)
 *     RtlLookupFunctionEntry @ 0x1402CB300 (RtlLookupFunctionEntry.c)
 *     RtlInitializeExtendedContext @ 0x1403D8DF0 (RtlInitializeExtendedContext.c)
 *     RtlpGetStackLimitsEx @ 0x1403D9530 (RtlpGetStackLimitsEx.c)
 *     RtlInitializeExtendedContext2 @ 0x1403D9690 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength @ 0x1403D9A10 (RtlGetExtendedContextLength.c)
 *     RtlGuardCheckExceptionHandler @ 0x14044E930 (RtlGuardCheckExceptionHandler.c)
 *     RtlVirtualUnwind @ 0x14052DE90 (RtlVirtualUnwind.c)
 *     RtlGuardCheckLongJumpTarget @ 0x140533210 (RtlGuardCheckLongJumpTarget.c)
 *     RtlCaptureContext2 @ 0x140536FA0 (RtlCaptureContext2.c)
 *     RtlRestoreContext @ 0x140537140 (RtlRestoreContext.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x14072AE60 (ZwRaiseException.c)
 *     KeGetCurrentStackPointer @ 0x14072BF60 (KeGetCurrentStackPointer.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 *     RtlpExecuteHandlerForUnwind @ 0x1407362A0 (RtlpExecuteHandlerForUnwind.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __cdecl RtlUnwindEx(
        PVOID TargetFrame,
        PVOID TargetIp,
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID ReturnValue,
        PCONTEXT ContextRecord,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  PCONTEXT v7; // r13
  ULONG v9; // ebx
  unsigned __int64 CurrentStackPointer; // rax
  char v11; // r15
  char v12; // di
  ULONG v13; // r14d
  int v14; // ebx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  void *v17; // rsp
  void *v18; // rsp
  _CONTEXT *v19; // r14
  _CONTEXT *v20; // r15
  _UNWIND_HISTORY_TABLE *v21; // rcx
  ULONG_PTR v22; // r12
  char *v23; // r13
  int v24; // eax
  DWORD64 v25; // rbx
  __int64 v26; // r8
  int v27; // r8d
  DWORD64 v28; // rbx
  int v29; // r9d
  NTSTATUS v30; // eax
  unsigned int ContextFlags; // edx
  BOOL *v32; // r8
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  void *v35; // rsp
  void *v36; // rsp
  ULONG_PTR v37; // r10
  int v38; // r15d
  bool v39; // zf
  unsigned int v40; // r10d
  _EXCEPTION_RECORD *v41; // rcx
  unsigned __int64 v42; // rax
  int v43; // ebx
  int v44; // r8d
  _CONTEXT *v45; // rax
  ULONG v46; // et0
  char v47; // al
  char v48; // al
  _CONTEXT *v49; // rax
  _EXCEPTION_RECORD *v50; // rbx
  int ExceptionCode; // eax
  _CONTEXT *v52; // r15
  _CONTEXT *v53; // r11
  __int64 v54; // r8
  __int64 v55; // r9
  PRUNTIME_FUNCTION v56; // r9
  DWORD64 v57; // r10
  unsigned int v58; // [rsp+70h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+74h] [rbp+4h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+78h] [rbp+8h] BYREF
  ULONG_PTR v61; // [rsp+80h] [rbp+10h] BYREF
  char *v62; // [rsp+88h] [rbp+18h] BYREF
  PCONTEXT v63; // [rsp+90h] [rbp+20h]
  PEXCEPTION_ROUTINE v64; // [rsp+98h] [rbp+28h] BYREF
  PVOID HandlerData; // [rsp+A0h] [rbp+30h] BYREF
  PCONTEXT v66; // [rsp+A8h] [rbp+38h]
  unsigned __int64 ImageBase; // [rsp+B0h] [rbp+40h] BYREF
  PUNWIND_HISTORY_TABLE v68; // [rsp+B8h] [rbp+48h]
  _EXCEPTION_RECORD *ExceptionRecorda; // [rsp+C0h] [rbp+50h]
  PCONTEXT_EX ContextEx; // [rsp+C8h] [rbp+58h] BYREF
  DWORD64 v71; // [rsp+D0h] [rbp+60h]
  PVOID v72; // [rsp+D8h] [rbp+68h]
  PVOID v73; // [rsp+E0h] [rbp+70h]
  DWORD64 v74; // [rsp+F0h] [rbp+80h] BYREF
  DWORD64 v75; // [rsp+F8h] [rbp+88h]
  _CONTEXT_EX *v76; // [rsp+100h] [rbp+90h]
  ULONG_PTR v77; // [rsp+108h] [rbp+98h]
  PVOID v78; // [rsp+110h] [rbp+A0h]
  _CONTEXT *v79; // [rsp+118h] [rbp+A8h]
  EXCEPTION_DISPOSITION (__cdecl *v80)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+120h] [rbp+B0h]
  PVOID v81; // [rsp+128h] [rbp+B8h]
  _UNWIND_HISTORY_TABLE *v82; // [rsp+130h] [rbp+C0h]
  int v83; // [rsp+138h] [rbp+C8h]
  PCONTEXT v84; // [rsp+140h] [rbp+D0h]
  int v85; // [rsp+150h] [rbp+E0h] BYREF
  __int64 v86; // [rsp+158h] [rbp+E8h]
  unsigned __int64 Rip; // [rsp+160h] [rbp+F0h]
  int v88; // [rsp+168h] [rbp+F8h]

  v7 = ContextRecord;
  ExceptionRecorda = ExceptionRecord;
  v73 = TargetIp;
  v66 = ContextRecord;
  v68 = HistoryTable;
  v72 = ReturnValue;
  memset_0(&v74, 0, 0x50uLL);
  memset_0(&v85, 0, 0x98uLL);
  v64 = 0LL;
  v9 = 0;
  HandlerData = 0LL;
  v61 = 0LL;
  ImageBase = 0LL;
  ContextLength = 0;
  v62 = 0LL;
  v58 = 0;
  CurrentStackPointer = KeGetCurrentStackPointer();
  KeQueryCurrentStackInformationEx(CurrentStackPointer, &v58, &v62, &v61);
  v11 = 1;
  v12 = v58 == 10;
  if ( !(unsigned __int8)RtlpGetStackLimits((__int64)&v62, (__int64)&v61) )
LABEL_20:
    RtlRaiseStatus(-1073741784);
  v13 = 1048587;
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v13 = 1048715;
    if ( (ContextRecord->ContextFlags & 0x100080) != 0x100080 )
    {
      RtlGetExtendedContextLength(0x10008Bu, &ContextLength);
      v9 = ContextLength;
      v33 = ContextLength + 15LL;
      if ( v33 <= ContextLength )
        v33 = 0xFFFFFFFFFFFFFF0LL;
      v34 = v33 & 0xFFFFFFFFFFFFFFF0uLL;
      v35 = alloca(v34);
      v36 = alloca(v34);
      v7 = (PCONTEXT)&v58;
      v66 = (PCONTEXT)&v58;
      RtlInitializeExtendedContext((PCONTEXT)&v58, 0x10008Bu, &ContextEx);
    }
    if ( !(_BYTE)KiKernelCetEnabled )
      goto LABEL_7;
    v11 = 5;
  }
  else
  {
    v66 = ContextRecord;
  }
  v14 = 1296;
  if ( (v11 & 4) == 0 )
    v14 = 1264;
  v9 = v14 + 15;
LABEL_7:
  v15 = v9 + 15LL;
  if ( v15 <= v9 )
    v15 = 0xFFFFFFFFFFFFFF0LL;
  v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
  v17 = alloca(v16);
  v18 = alloca(v16);
  v84 = (PCONTEXT)&v58;
  RtlInitializeExtendedContext2((PCONTEXT)&v58, v13, &ContextEx, 0LL);
  v63 = (PCONTEXT)&v58;
  v19 = v7;
  v20 = (_CONTEXT *)&v58;
  RtlCaptureContext2(v7);
  v21 = v68;
  if ( v68 )
    v68->Search = 1;
  if ( !ExceptionRecord )
  {
    v85 = -1073741785;
    v86 = 0LL;
    Rip = v7->Rip;
    ExceptionRecorda = (_EXCEPTION_RECORD *)&v85;
    v88 = 0;
  }
  v22 = v61;
  v23 = v62;
  v24 = 2;
  BugCheckParameter1 = 0LL;
  if ( !TargetFrame )
    v24 = 6;
  v58 = v24;
  while ( 1 )
  {
    v25 = v19->Rip;
    v71 = v25;
    ContextEx = (PCONTEXT_EX)RtlLookupFunctionEntry(v25, &ImageBase, v21);
    RtlpCopyContext(v20, v19, v26, ContextEx);
    v27 = v25;
    v28 = ImageBase;
    v30 = RtlVirtualUnwind2(
            2,
            ImageBase,
            v27,
            v29,
            (__int64)v20,
            0LL,
            (__int64)&HandlerData,
            (__int64)&BugCheckParameter1,
            0LL,
            0LL,
            0LL,
            (__int64)&v64,
            0);
    if ( v30 < 0 )
      RtlRaiseStatus(v30);
    v37 = BugCheckParameter1;
    if ( (BugCheckParameter1 & 7) != 0 || BugCheckParameter1 >= v22 || BugCheckParameter1 < (unsigned __int64)v23 )
    {
      if ( v12 != 1 )
        goto LABEL_20;
      v12 = 2;
      if ( !(unsigned __int8)RtlpGetStackLimitsEx(BugCheckParameter1, 0LL) )
        goto LABEL_20;
      v37 = BugCheckParameter1;
      v22 = v61;
      v23 = v62;
    }
    if ( TargetFrame && !v12 && (unsigned __int64)TargetFrame < v37 )
      goto LABEL_20;
    if ( v64 )
    {
      v38 = 0;
      v78 = v73;
      while ( 1 )
      {
        v39 = TargetFrame == (PVOID)v37;
        v40 = v58;
        if ( v39 )
        {
          v40 = v58 | 0x20;
          v58 |= 0x20u;
        }
        v41 = ExceptionRecorda;
        v42 = (unsigned __int64)v72;
        ExceptionRecorda->ExceptionFlags = v40;
        v19->Rax = v42;
        v74 = v71;
        v76 = ContextEx;
        v80 = v64;
        v81 = HandlerData;
        v75 = v28;
        v82 = v68;
        v77 = BugCheckParameter1;
        v79 = v19;
        v83 = v38;
        v43 = v19->ContextFlags & 0x100040;
        v44 = RtlpExecuteHandlerForUnwind(v41, BugCheckParameter1, v19, &v74);
        if ( v43 != 1048640 )
        {
          ContextFlags = v19->ContextFlags;
          if ( (ContextFlags & 0x100040) == 0x100040 )
          {
            ContextFlags &= ~0x40u;
            v19->ContextFlags = ContextFlags;
          }
        }
        v58 &= 0xFFFFFF9F;
        v32 = (BOOL *)(unsigned int)(v44 - 1);
        if ( (_DWORD)v32 )
        {
          if ( (_DWORD)v32 != 2 )
            RtlRaiseStatus(-1073741786);
          v28 = v75;
          v71 = v74;
          ImageBase = v75;
          ContextEx = v76;
          RtlpCopyContext(v66, v79, v32, v76);
          v52 = v84;
          v63 = v84;
          v19 = v53;
          RtlpCopyContext(v84, v53, v54, v55);
          v64 = RtlVirtualUnwind(2u, v28, v57, v56, v52, &HandlerData, &BugCheckParameter1, 0LL);
          if ( v64 != v80 || (v37 = BugCheckParameter1, BugCheckParameter1 != v77) || HandlerData != v81 )
            __fastfail(0x27u);
          v38 = v83;
          v68 = v82;
          v47 = v58 | 0x40;
          v58 |= 0x40u;
          if ( (BugCheckParameter1 & 7) == 0 && BugCheckParameter1 < v22 && BugCheckParameter1 >= (unsigned __int64)v23
            || v12 != 1 )
          {
            goto LABEL_45;
          }
          v12 = 2;
          RtlpGetStackLimitsEx(BugCheckParameter1, 0LL);
          v22 = v61;
          v23 = v62;
        }
        else
        {
          if ( (PVOID)BugCheckParameter1 != TargetFrame )
          {
            v45 = v19;
            v19 = v63;
            v63 = v45;
          }
          v46 = _mm_getcsr();
          ContextLength = v46;
          v28 = ImageBase;
          v19->MxCsr = v46;
          v19->FltSave.MxCsr = v46;
        }
        v47 = v58;
        v37 = BugCheckParameter1;
LABEL_45:
        if ( (v47 & 0x40) == 0 )
        {
          v20 = v63;
          goto LABEL_47;
        }
      }
    }
    if ( (PVOID)v37 != TargetFrame )
    {
      v49 = v19;
      v19 = v20;
      v20 = v49;
      v63 = v49;
    }
LABEL_47:
    v48 = 0;
    if ( v12 != 2 )
      v48 = v12;
    if ( (v37 & 7) != 0 || v37 >= v22 || v37 < (unsigned __int64)v23 )
      break;
    if ( (PVOID)v37 == TargetFrame )
      goto LABEL_57;
    v21 = v68;
    v12 = v48;
  }
  if ( (PVOID)v37 == TargetFrame )
  {
LABEL_57:
    v50 = ExceptionRecorda;
    v19->Rax = (unsigned __int64)v72;
    ExceptionCode = v50->ExceptionCode;
    if ( v50->ExceptionCode != -2147483607 )
    {
      v19->Rip = (unsigned __int64)v73;
      ExceptionCode = v50->ExceptionCode;
      if ( v50->ExceptionCode != -2147483610 )
      {
        v50->ExceptionCode = -1073741785;
        ExceptionCode = -1073741785;
      }
    }
    if ( v50 )
    {
      if ( ExceptionCode == -1073741785 )
      {
        if ( !(_BYTE)KiKernelCetEnabled )
          RtlGuardCheckExceptionHandler(v19->Rip);
      }
      else if ( ExceptionCode == -2147483610 && !(_BYTE)KiKernelCetEnabled )
      {
        RtlGuardCheckLongJumpTarget(*(PVOID *)(v50->ExceptionInformation[0] + 80), ContextFlags, v32);
      }
    }
    RtlRestoreContext(v19, v50);
  }
  else
  {
    if ( v71 == v19->Rip )
      RtlRaiseStatus(-1073741569);
    ZwRaiseException(ExceptionRecorda, v19, 0);
  }
}
