/*
 * XREFs of SepAdtStagingEvent @ 0x1409202F8
 * Callers:
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14090B0A0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeAuditHandleCreation @ 0x14091F860 (SeAuditHandleCreation.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140215728 (SepAdtLogAuditRecord.c)
 *     PsGetCurrentThreadProcess @ 0x1404A3C80 (PsGetCurrentThreadProcess.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x1404A8CA4 (SepCheckAndCopySelfRelativeSD.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 *     ObNormalizeHandleValue @ 0x14091F114 (ObNormalizeHandleValue.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14091F7B0 (PsGetAllocatedFullProcessImageNameEx.c)
 *     RtlCompareUnicodeStrings @ 0x140943110 (RtlCompareUnicodeStrings.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

bool __fastcall SepAdtStagingEvent(
        __int16 a1,
        __int64 a2,
        unsigned __int64 *a3,
        PCWCH *a4,
        unsigned __int16 *a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        unsigned __int8 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v14; // r12
  __int64 v15; // rbx
  void *v16; // rsi
  void *v17; // r14
  _KPROCESS *CurrentThreadProcess; // rax
  signed int AllocatedFullProcessImageName; // edi
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rax
  int v24; // r9d
  int v25; // r15d
  int v26; // ecx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  size_t v32; // r15
  unsigned int v33; // r13d
  char *Pool2; // rax
  char *v35; // rbx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int16 v39; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v40; // [rsp+3Ah] [rbp-CEh]
  size_t Size; // [rsp+3Ch] [rbp-CCh] BYREF
  void *Src; // [rsp+48h] [rbp-C0h] BYREF
  void *v43; // [rsp+50h] [rbp-B8h] BYREF
  PVOID P; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 *v45; // [rsp+60h] [rbp-A8h]
  _DWORD v46[2]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v47; // [rsp+70h] [rbp-98h]
  __int16 v48; // [rsp+78h] [rbp-90h]
  __int16 v49; // [rsp+7Ah] [rbp-8Eh]
  int v50; // [rsp+80h] [rbp-88h]
  _DWORD v51[5]; // [rsp+84h] [rbp-84h]
  __int64 v52; // [rsp+98h] [rbp-70h]
  int v53; // [rsp+A0h] [rbp-68h]
  int v54; // [rsp+A4h] [rbp-64h]
  const int *v55; // [rsp+B8h] [rbp-50h]
  int v56; // [rsp+C0h] [rbp-48h]
  int v57; // [rsp+C4h] [rbp-44h]
  __int64 v58; // [rsp+C8h] [rbp-40h]
  int v59; // [rsp+E0h] [rbp-28h]
  int v60; // [rsp+E4h] [rbp-24h]
  const int *v61; // [rsp+F8h] [rbp-10h]
  int v62; // [rsp+100h] [rbp-8h]
  int v63; // [rsp+104h] [rbp-4h]
  PCWCH *v64; // [rsp+118h] [rbp+10h]
  int v65; // [rsp+120h] [rbp+18h]
  int v66; // [rsp+124h] [rbp+1Ch]
  unsigned __int16 *v67; // [rsp+138h] [rbp+30h]
  int v68; // [rsp+140h] [rbp+38h]
  int v69; // [rsp+144h] [rbp+3Ch]
  unsigned __int64 v70; // [rsp+148h] [rbp+40h]
  int v71; // [rsp+160h] [rbp+58h]
  int v72; // [rsp+164h] [rbp+5Ch]
  __int64 v73; // [rsp+168h] [rbp+60h]
  int v74; // [rsp+180h] [rbp+78h]
  int v75; // [rsp+184h] [rbp+7Ch]
  PVOID v76; // [rsp+198h] [rbp+90h]

  v45 = a3;
  v40 = a1;
  memset_0(v46, 0, 0x418uLL);
  v14 = *(_QWORD *)(a12 + 72);
  P = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  Size = 0LL;
  v17 = 0LL;
  Src = 0LL;
  v43 = 0LL;
  v39 = 0;
  if ( !v14
    || !*(_BYTE *)(v14 + 216)
    || a1 != 117
    && a1 != 129
    && RtlCompareUnicodeStrings(a4[1], (unsigned __int64)*(unsigned __int16 *)a4 >> 1, L"File", 4uLL, 0) )
  {
    return 1;
  }
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64 *)&P);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    if ( a6 )
      v15 = *(_QWORD *)(a6 + 24);
    v21 = a6;
    if ( !a6 )
      v21 = a7;
    v22 = **(_QWORD **)(v21 + 152);
    v23 = *(_QWORD *)(a7 + 24);
    v46[0] = 3;
    v46[1] = 4818;
    v48 = 130;
    v24 = 16;
    v25 = 8;
    if ( (a8 & 0x2000000) != 0 || (v49 = 8, !a10) )
      v49 = 16;
    v50 = 4;
    v26 = *(unsigned __int8 *)(v22 + 1);
    v52 = v22;
    v53 = 1;
    v55 = &SeSubsystemName;
    v56 = 5;
    v51[0] = 4 * v26 + 8;
    v54 = 32;
    v57 = 8;
    v58 = v15;
    if ( !a6 )
      v58 = v23;
    v59 = 1;
    v60 = 32;
    v61 = &SeSubsystemName;
    v47 = 4;
    if ( a4 )
    {
      v27 = *(unsigned __int16 *)a4 + 16;
      v62 = 1;
      v63 = v27;
      v64 = a4;
      if ( a5 )
      {
        if ( v40 == 117 || (v65 = 1, v40 == 129) )
          v65 = 2;
        v28 = *a5;
        v67 = a5;
        v66 = v28 + 16;
      }
      v68 = 11;
      v69 = 8;
      if ( v45 )
        v70 = ObNormalizeHandleValue(*v45);
      else
        v70 = 0LL;
      v73 = a11;
      v71 = 11;
      v72 = 8;
      v74 = 2;
      v29 = v24 + *(unsigned __int16 *)P;
      v76 = P;
      v75 = v29;
      v47 = 9;
      AllocatedFullProcessImageName = SepCheckAndCopySelfRelativeSD(
                                        *(__int16 **)(v14 + 56),
                                        &Src,
                                        (ULONG *)&Size + 1,
                                        &v39);
      if ( AllocatedFullProcessImageName < 0 )
      {
        v16 = Src;
      }
      else
      {
        v30 = SepCheckAndCopySelfRelativeSD(*(__int16 **)(v14 + 64), &v43, (ULONG *)&Size, (_BYTE *)&v39 + 1);
        v17 = v43;
        AllocatedFullProcessImageName = v30;
        v16 = Src;
        if ( v30 >= 0 )
        {
          if ( !Src && !v43 )
            v25 = 0;
          v31 = Size - v25;
          v32 = HIDWORD(Size);
          v33 = v31 + HIDWORD(Size) + 152;
          Pool2 = (char *)ExAllocatePool2(0x100uLL);
          v35 = Pool2;
          if ( Pool2 )
          {
            memset_0(Pool2, 0, v33);
            *((_DWORD *)v35 + 34) = a10;
            if ( !a10 )
              a9 = a8;
            *((_DWORD *)v35 + 33) = 4;
            *(_DWORD *)v35 = a9 & 0xFDFFFFFF;
            *(_OWORD *)(v35 + 4) = *(_OWORD *)(v14 + 88);
            *(_OWORD *)(v35 + 20) = *(_OWORD *)(v14 + 104);
            *(_OWORD *)(v35 + 36) = *(_OWORD *)(v14 + 120);
            *(_OWORD *)(v35 + 52) = *(_OWORD *)(v14 + 136);
            *(_OWORD *)(v35 + 68) = *(_OWORD *)(v14 + 152);
            *(_OWORD *)(v35 + 84) = *(_OWORD *)(v14 + 168);
            *(_OWORD *)(v35 + 100) = *(_OWORD *)(v14 + 184);
            *(_OWORD *)(v35 + 116) = *(_OWORD *)(v14 + 200);
            if ( v16 )
              memmove(v35 + 144, v16, v32);
            if ( v17 )
              memmove(&v35[v32 + 144], v17, (unsigned int)Size);
            v51[8 * v47 - 1] = 29;
            v51[8 * v47] = v33;
            *(&v52 + 4 * v47++) = (__int64)v35;
            v51[8 * v47 - 1] = 30;
            v51[8 * v47] = v33;
            v37 = 0LL;
            *(&v52 + 4 * v47) = (__int64)v35;
            do
            {
              v38 = v37 + 4LL * v47;
              ++v37;
              *(_QWORD *)&v51[2 * v38 + 1] = 0LL;
            }
            while ( v37 < 2 );
            ++v47;
            SepAdtLogAuditRecord(v46);
            ExFreePoolWithTag(v35, 0);
          }
          else
          {
            AllocatedFullProcessImageName = -1073741670;
          }
        }
      }
    }
    else
    {
      AllocatedFullProcessImageName = -1073741811;
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( (_BYTE)v39 && v16 )
    ExFreePoolWithTag(v16, 0);
  if ( HIBYTE(v39) && v17 )
    ExFreePoolWithTag(v17, 0);
  if ( AllocatedFullProcessImageName < 0 )
    SepAuditFailed(AllocatedFullProcessImageName);
  return AllocatedFullProcessImageName >= 0;
}
