/*
 * XREFs of StorPortNotification @ 0x14004C160
 * Callers:
 *     sub_1401B7480 @ 0x1401B7480 (sub_1401B7480.c)
 * Callees:
 *     sub_14000B3C0 @ 0x14000B3C0 (sub_14000B3C0.c)
 *     sub_14000F5E0 @ 0x14000F5E0 (sub_14000F5E0.c)
 *     sub_14000FB90 @ 0x14000FB90 (sub_14000FB90.c)
 *     sub_140010540 @ 0x140010540 (sub_140010540.c)
 *     sub_140010960 @ 0x140010960 (sub_140010960.c)
 *     sub_140010CA0 @ 0x140010CA0 (sub_140010CA0.c)
 *     sub_14001E1F0 @ 0x14001E1F0 (sub_14001E1F0.c)
 *     sub_14001F350 @ 0x14001F350 (sub_14001F350.c)
 *     sub_1400229C8 @ 0x1400229C8 (sub_1400229C8.c)
 *     sub_140026E80 @ 0x140026E80 (sub_140026E80.c)
 *     sub_140027070 @ 0x140027070 (sub_140027070.c)
 *     sub_140029740 @ 0x140029740 (sub_140029740.c)
 *     sub_140029830 @ 0x140029830 (sub_140029830.c)
 *     sub_14002B350 @ 0x14002B350 (sub_14002B350.c)
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_1400416C8 @ 0x1400416C8 (sub_1400416C8.c)
 *     sub_140041AB0 @ 0x140041AB0 (sub_140041AB0.c)
 *     sub_1400541AC @ 0x1400541AC (sub_1400541AC.c)
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_14006B1AC @ 0x14006B1AC (sub_14006B1AC.c)
 *     sub_140071C98 @ 0x140071C98 (sub_140071C98.c)
 *     sub_140071DC8 @ 0x140071DC8 (sub_140071DC8.c)
 *     StorPortPause @ 0x1400745D0 (StorPortPause.c)
 *     StorPortResume @ 0x140074C10 (StorPortResume.c)
 *     sub_140075474 @ 0x140075474 (sub_140075474.c)
 *     sub_140086178 @ 0x140086178 (sub_140086178.c)
 *     sub_14008A3E8 @ 0x14008A3E8 (sub_14008A3E8.c)
 *     sub_14008A698 @ 0x14008A698 (sub_14008A698.c)
 *     sub_14008FA40 @ 0x14008FA40 (sub_14008FA40.c)
 *     sub_14009FCA0 @ 0x14009FCA0 (sub_14009FCA0.c)
 *     sub_1400A74B4 @ 0x1400A74B4 (sub_1400A74B4.c)
 *     sub_1400A7730 @ 0x1400A7730 (sub_1400A7730.c)
 *     sub_1400D474C @ 0x1400D474C (sub_1400D474C.c)
 *     sub_1400F320C @ 0x1400F320C (sub_1400F320C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

void StorPortNotification(int a1, _QWORD *a2, ...)
{
  int v2; // r15d
  int *v3; // rsi
  int *v4; // rdi
  int **v5; // rax
  int v6; // r8d
  int v7; // ecx
  PVOID DeferredContext; // rdx
  struct _SLIST_ENTRY *v9; // r14
  struct _SLIST_ENTRY *Next; // rcx
  const int *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  bool v15; // zf
  int v16; // eax
  char v17; // al
  const int *v18; // rax
  int v19; // ecx
  int v20; // ecx
  int v21; // r8d
  unsigned int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  void *v26; // rdx
  struct _KDPC *v27; // rcx
  PKDPC v28; // r14
  unsigned int v29; // edi
  char v30; // r15
  char v31; // r12
  PKDPC v32; // r14
  char v33; // r13
  struct _SLIST_ENTRY *v34; // rax
  struct _SLIST_ENTRY *v35; // rdi
  PKDPC v36; // r14
  int **v37; // rax
  KDEFERRED_ROUTINE *v38; // r14
  int *v39; // rcx
  int v40; // edx
  PDEVICE_OBJECT v41; // rcx
  __int64 v42; // rdx
  unsigned int *SystemArgument2; // rdi
  KIRQL CurrentIrql; // al
  ULONG_PTR v45; // r14
  __int64 v46; // rcx
  __int64 v47; // rax
  PKDPC v49; // rdi
  struct _KDPC *v50; // rdi
  KDPC_IMPORTANCE v51; // r14d
  KDPC_IMPORTANCE v52; // edx
  char v53; // r14
  _DWORD *v54; // rdi
  __int64 v55; // rax
  _DWORD *v56; // r9
  int v57; // r8d
  KDEFERRED_ROUTINE *v58; // r10
  _DWORD *v59; // rdi
  int v60; // r8d
  int v61; // r8d
  __int64 v62; // rax
  _DWORD *v63; // r9
  ULONG TargetInfoAsUlong; // ecx
  ULONG v65; // ecx
  ULONG v66; // ecx
  ULONG v67; // ecx
  ULONG v68; // ecx
  PKDPC v69; // r14
  _QWORD *v70; // rdi
  __int64 v71; // rax
  KDEFERRED_ROUTINE *v72; // r14
  __int64 v73; // r10
  __int64 v74; // r11
  int v75; // r9d
  int v76; // r15d
  _DWORD *v77; // rdi
  unsigned __int8 v78; // r12
  unsigned __int8 v79; // r13
  int v80; // ecx
  KDEFERRED_ROUTINE *v81; // r12
  _DWORD *v82; // r14
  unsigned int v83; // edi
  __int64 *v84; // rax
  __int64 *v85; // r13
  __int64 *v86; // r15
  _DWORD *v87; // rdi
  PKDPC v88; // r14
  volatile USHORT Number; // ax
  _DWORD *v90; // rdi
  int SystemArgument1; // r15d
  __int64 v92; // rdx
  __int64 v93; // rdi
  PKDPC v94; // r14
  __int64 v95; // r13
  int DpcData; // edi
  int LockArray_high; // r9d
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // rcx
  int v100; // eax
  struct _SLIST_ENTRY *v101; // r14
  struct _KDPC *v102; // rcx
  void *v103; // rdx
  __int64 v104; // rdx
  KDEFERRED_ROUTINE *v105; // rdi
  PKDPC v106; // r15
  __int64 v107; // r14
  signed __int32 v108[8]; // [rsp+0h] [rbp-100h] BYREF
  va_list v109; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v110; // [rsp+68h] [rbp-98h]
  unsigned int v111; // [rsp+6Ch] [rbp-94h]
  int v112; // [rsp+70h] [rbp-90h]
  char v113; // [rsp+74h] [rbp-8Ch] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+78h] [rbp-88h] BYREF
  int v115; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v116; // [rsp+80h] [rbp-80h] BYREF
  __int64 v117; // [rsp+88h] [rbp-78h]
  __int64 v118; // [rsp+90h] [rbp-70h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+A8h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp-40h] BYREF
  void *v122; // [rsp+D0h] [rbp-30h]
  int v123; // [rsp+D8h] [rbp-28h]
  int v124; // [rsp+DCh] [rbp-24h]
  __int64 *v125; // [rsp+E0h] [rbp-20h]
  __int64 v126; // [rsp+E8h] [rbp-18h]
  _DWORD *v127; // [rsp+F0h] [rbp-10h]
  __int64 v128; // [rsp+F8h] [rbp-8h]
  int *v129; // [rsp+100h] [rbp+0h]
  __int64 v130; // [rsp+108h] [rbp+8h]
  const int *v131; // [rsp+110h] [rbp+10h]
  int v132; // [rsp+118h] [rbp+18h]
  int v133; // [rsp+11Ch] [rbp+1Ch]
  char *v134; // [rsp+120h] [rbp+20h]
  __int64 v135; // [rsp+128h] [rbp+28h]
  const int *v136; // [rsp+130h] [rbp+30h]
  int v137; // [rsp+138h] [rbp+38h]
  int v138; // [rsp+13Ch] [rbp+3Ch]
  __int64 retaddr; // [rsp+198h] [rbp+98h]
  _QWORD *v140; // [rsp+1A8h] [rbp+A8h]
  PKDPC v141; // [rsp+1B0h] [rbp+B0h] BYREF
  va_list va; // [rsp+1B0h] [rbp+B0h]
  unsigned __int64 v143; // [rsp+1B8h] [rbp+B8h] BYREF
  va_list va1; // [rsp+1B8h] [rbp+B8h]
  _DWORD *v145; // [rsp+1C0h] [rbp+C0h]
  _DWORD *v146; // [rsp+1C8h] [rbp+C8h]
  __int64 v147; // [rsp+1D0h] [rbp+D0h]
  _DWORD *v148; // [rsp+1D8h] [rbp+D8h]
  __int64 v149; // [rsp+1E0h] [rbp+E0h]
  __int64 v150; // [rsp+1E8h] [rbp+E8h]
  _DWORD *v151; // [rsp+1F0h] [rbp+F0h]
  va_list va2; // [rsp+1F8h] [rbp+F8h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v141 = va_arg(va1, PKDPC);
  va_copy(va2, va1);
  v143 = va_arg(va2, _QWORD);
  v145 = va_arg(va2, _DWORD *);
  v146 = va_arg(va2, _DWORD *);
  v147 = va_arg(va2, _QWORD);
  v148 = va_arg(va2, _DWORD *);
  v149 = va_arg(va2, _QWORD);
  v150 = va_arg(va2, _QWORD);
  v151 = va_arg(va2, _DWORD *);
  v140 = a2;
  v2 = a1;
  v112 = a1;
  v3 = 0LL;
  v109 = 0LL;
  v4 = 0LL;
  if ( !a2 )
    goto LABEL_18;
  v5 = (int **)*(a2 - 2);
  if ( !v5 || !*v5 )
    goto LABEL_18;
  v6 = **v5;
  if ( ((_BYTE)v5[31] & 1) != 0 )
  {
    if ( v6 == 1314275652 )
      v4 = *v5;
    goto LABEL_18;
  }
  if ( v6 != 1094997074 )
    goto LABEL_18;
  v3 = *v5;
  va_copy(v109, va);
  v7 = -1073741822;
  if ( !byte_1401687EA )
  {
    if ( byte_140168830 )
    {
      _InterlockedIncrement(&dword_1401687EC);
      v7 = ((__int64 (__fastcall *)(int *, _QWORD, int *))qword_1401687C8)(&dword_1401681E8, (unsigned int)v2, v3);
      _InterlockedDecrement(&dword_1401687EC);
    }
    a2 = v140;
  }
  v109 = 0LL;
  if ( v7 == -1073741822 )
  {
    va_copy(v109, va);
    if ( !byte_1401687EA )
    {
      if ( byte_140168830 )
      {
        _InterlockedIncrement(&dword_1401687EC);
        ((void (__fastcall *)(int *, _QWORD, int *))qword_1401687D8)(&dword_1401681E8, (unsigned int)v2, v3);
        _InterlockedDecrement(&dword_1401687EC);
      }
      a2 = v140;
    }
    v109 = 0LL;
LABEL_18:
    va_copy(v109, va);
    if ( v2 <= 4096 )
    {
      if ( v2 != 4096 )
      {
        switch ( v2 )
        {
          case 0:
            va_copy(v109, va1);
            if ( !v3 || !v141 )
            {
              if ( !v4 || !v141 )
                break;
              v9 = (struct _SLIST_ENTRY *)(LOBYTE(v141->Number) == 40 ? v141[1].DeferredContext : v141->SystemArgument2);
              if ( !v9 )
                break;
              if ( (qword_140168458 & 8) != 0 )
                sub_140027070(v9);
              Next = v9[10].Next;
              if ( Next )
              {
                if ( *((_BYTE *)&Next[8].Next + 13) == 0xAB || *((_BYTE *)&Next[8].Next + 13) == 0xAC )
                {
                  if ( (unsigned int)dword_140168178 > 5
                    && (qword_140168188 & 0x400000000000LL) != 0
                    && (qword_140168190 & 0x400000000000LL) == qword_140168190 )
                  {
                    v12 = (const int *)*((_QWORD *)v4 + 127);
                    v125 = &v116;
                    v127 = v4 + 258;
                    v13 = -1LL;
                    v115 = v4[14];
                    v129 = &v115;
                    v116 = 0x1000000LL;
                    v126 = 8LL;
                    v128 = 16LL;
                    v130 = 4LL;
                    if ( v12 )
                    {
                      v14 = -1LL;
                      do
                        v15 = *((_WORD *)v12 + ++v14) == 0;
                      while ( !v15 );
                      v16 = 2 * v14 + 2;
                    }
                    else
                    {
                      v12 = &dword_140149108;
                      v16 = 2;
                    }
                    v15 = (v4[36] & 1) == 0;
                    v132 = v16;
                    v17 = 20;
                    v131 = v12;
                    if ( v15 )
                      v17 = 17;
                    v133 = 0;
                    v113 = v17;
                    v134 = &v113;
                    v18 = (const int *)*((_QWORD *)v4 + 128);
                    v135 = 1LL;
                    if ( v18 )
                    {
                      do
                        v15 = *((_WORD *)v18 + ++v13) == 0;
                      while ( !v15 );
                      v19 = 2 * v13 + 2;
                    }
                    else
                    {
                      v18 = &dword_140149108;
                      v19 = 2;
                    }
                    v136 = v18;
                    *(_DWORD *)&EventDescriptor.Level = 5;
                    UserData.Ptr = (ULONGLONG)off_140168180;
                    v137 = v19;
                    EventDescriptor.Keyword = 0x400000000000LL;
                    v138 = 0;
                    *(_DWORD *)&EventDescriptor.Id = 184549376;
                    UserData.Size = *(unsigned __int16 *)off_140168180;
                    v122 = &unk_14015AC2D;
                    v124 = 1;
                    UserData.Reserved = 2;
                    v123 = 119;
                    v111 = (unsigned int)&unk_14015B1E4 - (unsigned int)&unk_140155C08;
                    EtwWriteEx(qword_140168198, &EventDescriptor, 0LL, 1u, 0LL, 0LL, 8u, &UserData);
                  }
                  break;
                }
                *((_BYTE *)&Next[8].Next + 13) = -85;
              }
              LOBYTE(v9[1].Next) = (__int64)v9[1].Next & 0xE3 | 0x10;
              if ( KeGetCurrentIrql() > 2u )
              {
                ExpInterlockedPushEntrySList((PSLIST_HEADER)v4 + 69, v9 + 2);
                KeInsertQueueDpc((PRKDPC)(*((_QWORD *)v4 + 1) + 200LL), 0LL, 0LL);
              }
              else
              {
                ((void (__fastcall *)(struct _SLIST_ENTRY *))v9[41].Next)(v9);
              }
              break;
            }
            if ( LOBYTE(v141->Number) == 40 )
              DeferredContext = v141[1].DeferredContext;
            else
              DeferredContext = v141->SystemArgument2;
            if ( DeferredContext )
            {
              sub_140026E80((__int64)v3, (__int64)DeferredContext, 0);
              v109 = 0LL;
              goto LABEL_197;
            }
            break;
          case 3:
            if ( !v3 )
              break;
            sub_14000FB90((__int64)v3, 39, (__int64)v3, (unsigned int)v3[14], retaddr, (unsigned int)v3[150], 0LL);
            v22 = v3[150];
            if ( (byte_1401694F0 & 2) != 0 )
              sub_1400541AC(v20, (unsigned int)&unk_14014A038, v21, (_DWORD)v140, v3[14], v3[150]);
            if ( !v22 )
              break;
            if ( v22 > 0x3D0900 )
              v22 = 4000000;
            v23 = v22 / 0xF4240 + 1;
            if ( v22 == 1000000 * (v22 / 0xF4240) )
              v23 = v22 / 0xF4240;
            StorPortPause(v140, v23);
            v109 = 0LL;
            goto LABEL_197;
          case 6:
            v28 = v141;
            v29 = v143;
            if ( !v3 )
              break;
            if ( (byte_1401694F0 & 2) != 0 )
              sub_1400541AC((unsigned int)va, (unsigned int)&unk_14014AA60, 0x40000000u, (_DWORD)a2, v3[14], v143);
            if ( KeGetCurrentIrql() > 2u )
            {
              if ( _InterlockedCompareExchange(v3 + 288, 134684676, 134684677) != 134684677 || v3 == (int *)-1136LL )
              {
                _InterlockedIncrement(&dword_1401688B8);
                v109 = 0LL;
              }
              else
              {
                v3[292] = 1;
                *((_QWORD *)v3 + 147) = v28;
                v3[296] = v29;
                ExpInterlockedPushEntrySList((PSLIST_HEADER)v3 + 69, (PSLIST_ENTRY)v3 + 71);
                v27 = (struct _KDPC *)(v3 + 254);
                v26 = v3 + 252;
LABEL_73:
                KeInsertQueueDpc(v27, v26, 0LL);
                v109 = 0LL;
              }
            }
            else
            {
              sub_14000B3C0((__int64)v3, (__int64)v28, v29);
              v109 = 0LL;
            }
            goto LABEL_197;
          case 7:
            if ( !v3 )
              break;
            sub_14000FB90((__int64)v3, 38, (__int64)v3, (unsigned int)v3[14], retaddr, (unsigned int)v3[150], 0LL);
            if ( (byte_1401694F0 & 2) != 0 )
              sub_140071C98(v24, &unk_14014B1A8, v25, v140, v3[14]);
            *(_WORD *)((char *)v3 + 105) = 257;
            v26 = 0LL;
            v27 = (struct _KDPC *)(v3 + 478);
            goto LABEL_73;
          case 8:
            v30 = v143;
            v31 = 0;
            v32 = v141;
            v33 = 0;
            if ( (_BYTE)v143 != 0xFF )
            {
              v31 = (char)v145;
              v33 = (char)v146;
            }
            if ( !v141 )
              break;
            if ( v141->TargetInfoAsUlong > 0x80 )
              break;
            if ( !v3 )
              break;
            v34 = (struct _SLIST_ENTRY *)sub_14006B1AC(v3 + 348);
            v35 = v34;
            if ( !v34 )
              break;
            LOBYTE(v34[2].Next) = v30;
            if ( v30 != -1 )
            {
              BYTE1(v34[2].Next) = v31;
              BYTE2(v34[2].Next) = v33;
            }
            memmove(&v34[2].Next + 1, v32, v32->TargetInfoAsUlong);
            sub_14000F5E0((char *)v3 + 1392, v35);
            v109 = 0LL;
            goto LABEL_196;
          case 10:
            if ( !v3 )
              break;
            if ( (byte_1401694F0 & 2) != 0 )
              sub_140071C98((PKDPC *)va, &unk_14014A430, 0x140000000uLL, *((_QWORD *)v3 + 77) + 16LL, v3[14]);
            if ( !(unsigned __int8)StorPortResume(
                                     *((_QWORD *)v3 + 77) + 16LL,
                                     a2,
                                     (unsigned int)_InterlockedExchange(v3 + 519, 1)) )
              break;
            IoInvalidateDeviceRelations(*((PDEVICE_OBJECT *)v3 + 4), BusRelations);
            v109 = 0LL;
            goto LABEL_197;
          case 11:
            if ( !v3 )
              break;
            if ( (byte_1401694F0 & 2) != 0 )
              sub_1400541AC(
                (unsigned int)va,
                (unsigned int)&unk_140149EC8,
                0x40000000u,
                *((_QWORD *)v3 + 77) + 16,
                v3[14],
                v3[518]);
            if ( !(unsigned __int8)StorPortPause(*((_QWORD *)v3 + 77) + 16LL, (unsigned int)v3[518]) )
              break;
            _InterlockedExchange(v3 + 519, 0);
            v109 = 0LL;
            goto LABEL_197;
          case 12:
            *(_QWORD *)&v141->TargetInfoAsUlong = MEMORY[0xFFFFF78000000320];
            break;
          case 13:
            KeBugCheckEx(0xF7u, 0LL, 0LL, 0LL, 0LL);
          case 14:
            sub_140086178((PKDPC *)va, (unsigned int)v141, v143);
            break;
          case 15:
            if ( v4 )
              break;
            v36 = v141;
            if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 )
            {
              if ( (HIDWORD(off_140168120->Timer) & 0x100) != 0 && BYTE1(off_140168120->Timer) >= 2u )
                sub_140055930(off_140168120->AttachedDevice, 10LL, &unk_140149070);
              if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 )
              {
                if ( (HIDWORD(off_140168120->Timer) & 0x100) != 0 && BYTE1(off_140168120->Timer) >= 2u )
                  sub_140055930(off_140168120->AttachedDevice, 11LL, &unk_140149070);
                if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 )
                {
                  if ( (HIDWORD(off_140168120->Timer) & 0x100) != 0 && BYTE1(off_140168120->Timer) >= 2u )
                    sub_140055930(off_140168120->AttachedDevice, 12LL, &unk_140149070);
                  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 )
                  {
                    if ( (HIDWORD(off_140168120->Timer) & 0x100) != 0 && BYTE1(off_140168120->Timer) >= 2u )
                      sub_140055930(off_140168120->AttachedDevice, 13LL, &unk_140149070);
                    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
                      && (HIDWORD(off_140168120->Timer) & 0x100) != 0
                      && BYTE1(off_140168120->Timer) >= 2u )
                    {
                      sub_140055930(off_140168120->AttachedDevice, 14LL, &unk_140149070);
                    }
                  }
                }
              }
            }
            if ( !v36 )
            {
              if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
                && (HIDWORD(off_140168120->Timer) & 0x100) != 0
                && BYTE1(off_140168120->Timer) >= 2u )
              {
                sub_140055930(off_140168120->AttachedDevice, 15LL, &unk_140149070);
              }
              break;
            }
            if ( v3 )
            {
              v109 = 0LL;
              *(_OWORD *)(v3 + 1142) = xmmword_1401691A0;
              *(_OWORD *)(v3 + 1146) = xmmword_1401691B0;
              *(_OWORD *)(v3 + 1150) = xmmword_1401691C0;
              *(_OWORD *)(v3 + 1154) = xmmword_1401691D0;
              *(_OWORD *)(v3 + 1158) = xmmword_1401691E0;
              *((_QWORD *)v3 + 581) = qword_1401691F0;
              *(_QWORD *)&v36->TargetInfoAsUlong = v3 + 1142;
              goto LABEL_197;
            }
            *(_QWORD *)&v36->TargetInfoAsUlong = &xmmword_1401691A0;
            return;
          default:
            break;
        }
LABEL_195:
        v109 = 0LL;
        if ( !v3 )
          return;
        goto LABEL_196;
      }
      v37 = (int **)*(a2 - 2);
      v38 = (KDEFERRED_ROUTINE *)v143;
      if ( v37 )
      {
        v39 = *v37;
        if ( *v37 )
        {
          v40 = *v39;
          if ( ((_BYTE)v37[31] & 1) != 0 )
          {
            if ( v40 == 1314275652 )
            {
              if ( (v39[36] & 0x20) != 0 )
              {
                *((_QWORD *)v39 + 121) = v141;
                *(_DWORD *)v38 = 1;
                goto LABEL_195;
              }
              v41 = off_140168120;
              if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
                && (HIDWORD(off_140168120->Timer) & 0x100) != 0
                && BYTE1(off_140168120->Timer) )
              {
                v42 = 24LL;
LABEL_143:
                sub_140055930(v41->AttachedDevice, v42, &unk_140149070);
              }
            }
          }
          else if ( v40 == 1094997074 )
          {
            if ( (v39[26] & 0x10) != 0 )
            {
              *((_QWORD *)v39 + 541) = v141;
              *(_DWORD *)v38 = 1;
              goto LABEL_195;
            }
            v41 = off_140168120;
            if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
              && (HIDWORD(off_140168120->Timer) & 0x100) != 0
              && BYTE1(off_140168120->Timer) )
            {
              v42 = 23LL;
              goto LABEL_143;
            }
          }
        }
      }
      *(_DWORD *)v38 = 0;
      goto LABEL_195;
    }
    if ( v2 <= 0x2000 )
    {
      if ( v2 != 0x2000 )
      {
        switch ( v2 )
        {
          case 4097:
            v49 = v141;
            if ( v141 && v143 )
            {
              KeInitializeDpc(v141, (PKDEFERRED_ROUTINE)v143, a2);
              KeInitializeSpinLock((PKSPIN_LOCK)&v49[1].TargetInfoAsUlong);
            }
            goto LABEL_195;
          case 4098:
            v54 = v146;
            if ( v141 )
              *v54 = KeInsertQueueDpc(v141, (PVOID)v143, v145);
            goto LABEL_195;
          case 4099:
            v55 = *(a2 - 2);
            v56 = 0LL;
            v57 = (int)v141;
            v58 = (KDEFERRED_ROUTINE *)v143;
            v59 = v145;
            if ( v55 && *(_QWORD *)v55 && (*(_BYTE *)(v55 + 248) & 1) == 0 && **(_DWORD **)v55 == 1094997074 )
            {
              v56 = *(_DWORD **)v55;
            }
            else if ( (unsigned int)((_DWORD)v141 - 2) <= 1 )
            {
              goto LABEL_195;
            }
            if ( v145 )
            {
              *v145 = (_DWORD)v141;
              v60 = v57 - 1;
              if ( v60 )
              {
                v61 = v60 - 1;
                if ( v61 )
                {
                  if ( v61 == 1 )
                    *((_BYTE *)v59 + 24) = sub_14001E1F0((__int64)v56);
                  else
                    *v59 = 0;
                }
                else
                {
                  sub_14002B350((__int64)v56, (struct _KLOCK_QUEUE_HANDLE *)(v59 + 2));
                }
              }
              else if ( v58 )
              {
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v58 + 8, (PKLOCK_QUEUE_HANDLE)(v59 + 2));
              }
            }
            goto LABEL_195;
          case 4100:
            v62 = *(a2 - 2);
            v63 = 0LL;
            if ( v62 && *(_QWORD *)v62 && (*(_BYTE *)(v62 + 248) & 1) == 0 && **(_DWORD **)v62 == 1094997074 )
              v63 = *(_DWORD **)v62;
            if ( v141 )
            {
              TargetInfoAsUlong = v141->TargetInfoAsUlong;
              if ( v141->TargetInfoAsUlong )
              {
                if ( v63 || TargetInfoAsUlong - 2 > 1 )
                {
                  v65 = TargetInfoAsUlong - 1;
                  if ( v65 )
                  {
                    v66 = v65 - 1;
                    if ( v66 )
                    {
                      v67 = v66 - 1;
                      if ( v67 )
                      {
                        v68 = v67 - 1;
                        if ( v68 )
                        {
                          if ( v68 == 1 )
                            KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&v141->DpcListEntry);
                        }
                        else
                        {
                          KeReleaseInStackQueuedSpinLockForDpc((PKLOCK_QUEUE_HANDLE)&v141->DpcListEntry);
                        }
                      }
                      else
                      {
                        sub_140029830((__int64)v63, (KIRQL)v141->DeferredRoutine);
                      }
                    }
                    else
                    {
                      sub_140029740((__int64)v63, (struct _KLOCK_QUEUE_HANDLE *)&v141->DpcListEntry);
                    }
                  }
                  else
                  {
                    KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)&v141->DpcListEntry);
                  }
                }
              }
            }
            goto LABEL_195;
          case 4101:
            if ( !v3 )
              goto LABEL_195;
            v72 = (KDEFERRED_ROUTINE *)v143;
            v73 = (__int64)v146;
            v74 = v147;
            v75 = (int)v145;
            v76 = (int)v141;
            v77 = v148;
            v111 = (unsigned int)v145;
            v117 = (__int64)v146;
            v118 = v147;
            if ( v143 && *(_WORD *)v143 == 1 )
            {
              v78 = *(_BYTE *)(v143 + 8);
              v79 = *(_BYTE *)(v143 + 9);
              v80 = *(unsigned __int8 *)(v143 + 10);
            }
            else
            {
              v78 = -1;
              v79 = -1;
              v80 = 255;
            }
            v110 = v80;
            if ( (byte_1401694F0 & 2) != 0 )
            {
              sub_140071DC8(
                v80,
                (_DWORD)a2,
                0,
                (_DWORD)a2,
                v3[14],
                (char)v141,
                v78,
                v79,
                v80,
                (char)v145,
                (char)v146,
                v147,
                v109);
              v75 = v111;
              v73 = v117;
              v74 = v118;
            }
            if ( !v72
              || *(_WORD *)v72 != 1
              || v78 > *((_BYTE *)v3 + 456)
              || (v76 & 3) != 0 && v79 > *((_BYTE *)v3 + 481)
              || (v76 & 1) != 0 && v110 > *((_BYTE *)v3 + 530)
              || (v76 & 7) == 0 )
            {
              if ( v77 )
                *v77 = -1056964602;
LABEL_279:
              v109 = 0LL;
              break;
            }
            if ( _InterlockedCompareExchange(v3 + 1206, 1, 0) == 1 )
            {
              if ( v77 )
              {
                *v77 = -1056964607;
                v109 = 0LL;
                break;
              }
              goto LABEL_279;
            }
            _InterlockedOr(v108, 0);
            v3[1207] = v76;
            *((_QWORD *)v3 + 605) = v72;
            v3[1208] = v75;
            *((_QWORD *)v3 + 606) = v73;
            *((_QWORD *)v3 + 607) = v74;
            _InterlockedOr(v108, 0);
            *((_BYTE *)v3 + 104) |= 0x40u;
            *((_BYTE *)v3 + 105) = 1;
            KeInsertQueueDpc((PRKDPC)(v3 + 478), 0LL, 0LL);
            if ( !v77 )
              goto LABEL_195;
            *v77 = 0;
            v109 = 0LL;
            break;
          case 4102:
            if ( !v4 )
            {
              if ( byte_140168DAA )
              {
                v69 = v141;
                if ( v143 )
                {
                  v70 = *(_BYTE *)(v143 + 2) == 40 ? *(_QWORD **)(v143 + 96) : *(_QWORD **)(v143 + 48);
                  if ( v70 )
                  {
                    if ( (byte_1401694F1 & 1) != 0 || (byte_1401694F3 & 2) != 0 )
                      v70[90] = v141;
                    if ( (byte_1401694F1 & 1) != 0 )
                      sub_140041AB0(v70, 1, (unsigned __int64)v69);
                    v71 = v70[28];
                    if ( v71 && *(_DWORD *)(v71 + 1940) && (byte_1401694F3 & 2) != 0 )
                      sub_1400416C8(v70, 1, (char)v69);
                  }
                }
              }
            }
            goto LABEL_195;
          case 4103:
            v81 = (KDEFERRED_ROUTINE *)v143;
            v82 = v145;
            v111 = 0;
            if ( v3 )
            {
              if ( !v141 || LOWORD(v141->TargetInfoAsUlong) != 1 || (v143 & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
              {
                *v145 = -1056964602;
                v109 = 0LL;
                goto LABEL_197;
              }
              LOWORD(v111) = v141->DpcListEntry.Next;
              BYTE2(v111) = BYTE2(v141->DpcListEntry.Next);
              v83 = v111;
              v84 = sub_14001F350((__int64)v3, v111);
              v85 = v84;
              if ( !v84 || (v84[244] & 4) == 0 )
              {
                *v82 = -1056964601;
                v109 = 0LL;
                goto LABEL_197;
              }
              v86 = v84 + 249;
              if ( _InterlockedCompareExchange((volatile signed __int32 *)v84 + 502, 1, 0) == 1 )
              {
                *v82 = -1056964596;
                v109 = 0LL;
                break;
              }
              if ( KeGetCurrentIrql() > 2u )
              {
                if ( _InterlockedCompareExchange((volatile signed __int32 *)v85 + 440, 134684676, 134684677) != 134684677
                  || v85 == (__int64 *)-1744LL )
                {
                  *v82 = -1056964596;
                }
                else
                {
                  *((_DWORD *)v85 + 444) = 12;
                  *((_DWORD *)v85 + 445) = v83;
                  v85[223] = (__int64)v86;
                  v86[1] = (__int64)v81;
                  ExpInterlockedPushEntrySList((PSLIST_HEADER)v3 + 69, (PSLIST_ENTRY)v85 + 109);
                  KeInsertQueueDpc((PRKDPC)(v3 + 254), v3 + 252, 0LL);
                  *v82 = 0;
                }
              }
              else
              {
                v86[1] = (__int64)v81;
                *v82 = sub_14009FCA0(v3, v83, v86);
              }
            }
            else
            {
              *v145 = -1056964602;
            }
            goto LABEL_195;
          case 4104:
            if ( v3 && v141 )
            {
              if ( LOBYTE(v141->Number) == 40 )
                SystemArgument2 = (unsigned int *)v141[1].DeferredContext;
              else
                SystemArgument2 = (unsigned int *)v141->SystemArgument2;
              if ( SystemArgument2 )
              {
                CurrentIrql = KeGetCurrentIrql();
                v45 = CurrentIrql;
                if ( CurrentIrql > 2u )
                {
                  v46 = *((_QWORD *)v3 + 2);
                  *(_OWORD *)BugCheckParameter2 = 0LL;
                  sub_1400403EC(v46, (__int64)BugCheckParameter2);
                  KeBugCheckEx(0xF0u, 5uLL, BugCheckParameter2[1], *((_QWORD *)SystemArgument2 + 21), v45);
                }
                if ( (v3[156] & 4) != 0 )
                  _InterlockedIncrement(v3 + 1272);
                if ( (qword_140168458 & 8) != 0 )
                  sub_140027070(SystemArgument2);
                if ( *v3 != 1094997074
                  || (v3[151] & 0x10) == 0
                  || _InterlockedExchange((volatile __int32 *)SystemArgument2 + 194, 4) != 1 )
                {
                  v47 = *((_QWORD *)SystemArgument2 + 20);
                  if ( v47 )
                    *(_BYTE *)(v47 + 141) = -85;
                  v15 = (*((_BYTE *)SystemArgument2 + 17) & 1) == 0;
                  *((_BYTE *)SystemArgument2 + 16) = SystemArgument2[4] & 0xE3 | 0x10;
                  if ( !v15 )
                  {
                    PoFxIdleComponent(**((_QWORD **)v3 + 620), SystemArgument2[187], 0LL);
                    _InterlockedDecrement64((volatile signed __int64 *)(*((_QWORD *)v3 + 620) + 80LL));
                    _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)v3 + 620) + 96LL));
                    *((_BYTE *)SystemArgument2 + 17) &= ~1u;
                  }
                  if ( *((_QWORD *)SystemArgument2 + 82) )
                  {
                    if ( (unsigned __int8)v45 < 2u )
                      LOBYTE(v45) = KfRaiseIrql(2u);
                    (*((void (__fastcall **)(unsigned int *))SystemArgument2 + 82))(SystemArgument2);
                    if ( (unsigned __int8)v45 < 2u )
                    {
                      KeLowerIrql(v45);
                      v109 = 0LL;
                      goto LABEL_197;
                    }
                  }
                }
              }
            }
            else if ( v4 && v141 )
            {
              if ( LOBYTE(v141->Number) == 40 ? v141[1].DeferredContext : v141->SystemArgument2 )
                sub_1400D474C(v4);
            }
            goto LABEL_195;
          case 4105:
            v50 = v141;
            v51 = (int)v146;
            if ( !v141 )
              goto LABEL_195;
            if ( !v143 )
              goto LABEL_195;
            KeInitializeDpc(v141, (PKDEFERRED_ROUTINE)v143, v145);
            if ( v51 == LowImportance )
              goto LABEL_195;
            v52 = v51;
            goto LABEL_194;
          case 4106:
            v50 = v141;
            v53 = (char)v146;
            if ( !v141 )
              goto LABEL_195;
            if ( !v143 )
              goto LABEL_195;
            KeInitializeThreadedDpc(v141, (PKDEFERRED_ROUTINE)v143, v145);
            if ( !v53 )
              goto LABEL_195;
            v52 = HighImportance;
LABEL_194:
            KeSetImportanceDpc(v50, v52);
            goto LABEL_195;
          case 4107:
            if ( v141 && v143 )
              KeSetTargetProcessorDpcEx(v141, (PPROCESSOR_NUMBER)v143);
            goto LABEL_195;
          case 4108:
            if ( !v3 || !v145 )
              goto LABEL_195;
            sub_140075474((_DWORD)v3, (_DWORD)v141, v143, 0xFFFF, (__int64)v145, 0, 0LL, 0, 0LL);
            v109 = 0LL;
            goto LABEL_197;
          case 4109:
            v87 = v151;
            if ( v3 && (_WORD)v145 && v146 )
            {
              sub_140075474(
                (_DWORD)v3,
                (_DWORD)v141,
                v143,
                (unsigned __int16)v145,
                (__int64)v146,
                v147,
                (__int64)v148,
                v149,
                v150);
              *v87 = 0;
            }
            else
            {
              *v151 = -1056964602;
            }
            goto LABEL_195;
          case 4110:
            if ( !v4 )
            {
              if ( v3 )
                _InterlockedDecrement(v3 + 1504);
              PsTerminateSystemThread(0);
            }
            goto LABEL_195;
          case 4111:
            v88 = v141;
            if ( v4 )
            {
              if ( LOWORD(v141->TargetInfoAsUlong) == 1 )
              {
                Number = v141->Number;
                if ( Number >= 0x30u && LODWORD(v141->DpcListEntry.Next) == 2 )
                {
                  v90 = v141->DeferredContext;
                  if ( v90 )
                  {
                    if ( Number >= 0x72u && WORD2(v141->SystemArgument1) >= 0x42u && *v90 == 1314276178 )
                    {
                      SystemArgument1 = (int)v141->SystemArgument1;
                      if ( v90[142] == 2 && _interlockedbittestandset(v90 + 268, 5u) != 1 )
                      {
                        v15 = (v90[336] & 0x20) == 0;
                        v90[142] = 4;
                        v90[294] = 35;
                        if ( !v15 )
                          sub_1400F320C((_DWORD)v90, 2, SystemArgument1, 0, 0LL, 0LL);
                        **((_DWORD **)v90 + 13) = SystemArgument1;
                        v92 = *((_QWORD *)v90 + 13);
                        *(_OWORD *)(v92 + 4) = *(_OWORD *)((char *)&v88->SystemArgument1 + 6);
                        *(_OWORD *)(v92 + 20) = *(_OWORD *)((char *)&v88->DpcData + 6);
                        *(_OWORD *)(v92 + 36) = *(_OWORD *)((char *)&v88[1].DpcListEntry.Next + 6);
                        *(_OWORD *)(v92 + 52) = *(_OWORD *)((char *)&v88[1].DeferredRoutine + 6);
                        *(_WORD *)(v92 + 68) = HIWORD(v88[1].SystemArgument1);
                        IoQueueWorkItem(*((PIO_WORKITEM *)v90 + 21), sub_1400E2F80, DelayedWorkQueue, v90);
                      }
                    }
                  }
                }
              }
            }
            goto LABEL_195;
          case 4112:
            if ( v4 )
            {
              if ( v141 )
              {
                v93 = *(_QWORD *)&v141[-1].TargetInfoAsUlong;
                if ( ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v93 + 552)) )
                {
                  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v93 + 976), 1, 0) )
                    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v93 + 552));
                  else
                    IoQueueWorkItemEx(*(PIO_WORKITEM *)(v93 + 176), sub_1400D7690, DelayedWorkQueue, (PVOID)v93);
                }
              }
            }
            goto LABEL_195;
          default:
            goto LABEL_195;
        }
LABEL_196:
        v2 = v112;
        goto LABEL_197;
      }
      v94 = v141;
      if ( !v3 || !v141 )
        goto LABEL_195;
      v95 = *(_QWORD *)&v141[1].TargetInfoAsUlong;
      DpcData = (int)v141[-2].DpcData;
      LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
      if ( (_BYTE)v143 == 1 )
      {
        v98 = *(unsigned int *)(v95 + 8);
        if ( DpcData < 0 )
        {
          v99 = *(_QWORD *)&v141[-1].TargetInfoAsUlong + 0x40000LL;
          if ( v99 < v98 )
          {
            *(_QWORD *)&v141[-1].TargetInfoAsUlong = v99;
            sub_140010540(*(_QWORD *)(*(_QWORD *)(v95 + 40) + 64LL), (__int64)&v94[-2].DpcListEntry, 1);
            v109 = 0LL;
            goto LABEL_197;
          }
        }
        *(_QWORD *)&v141[-1].TargetInfoAsUlong = v98;
        LODWORD(v94[-2].DpcData) = 0;
      }
      else
      {
        v100 = sub_1400229C8(v143);
        LODWORD(v94[-2].DpcData) = v100;
        *(_QWORD *)&v94[-1].TargetInfoAsUlong = 0LL;
        if ( v100 == -1073741790 && *(_BYTE *)v95 == 4 )
          LODWORD(v94[-2].DpcData) = -1073741662;
      }
      if ( (LockArray_high == (DpcData & 0x7FFFFFFF) || (*((_BYTE *)v3 + 4371) & 2) != 0) && KeGetCurrentIrql() == 2 )
      {
        sub_140010CA0((PIRP)&v94[-2].DpcListEntry, DpcData);
        v109 = 0LL;
      }
      else
      {
        *(_DWORD *)(v95 + 24) = DpcData;
        v15 = (v3[156] & 4) == 0;
        ProcNumber = 0;
        if ( !v15 )
          _InterlockedIncrement(v3 + 1272);
        v101 = (struct _SLIST_ENTRY *)(((unsigned __int64)&v94->DpcListEntry.Next + 7) & 0xFFFFFFFFFFFFFFF0uLL);
        if ( KeGetProcessorNumberFromIndex(DpcData & 0x7FFFFFFF, &ProcNumber) < 0 )
          goto LABEL_356;
        if ( (*((_BYTE *)v3 + 4371) & 2) != 0 )
          KeGetCurrentProcessorNumberEx(&ProcNumber);
        if ( ProcNumber.Group >= (unsigned int)dword_140168668
          || (unsigned int)ProcNumber.Number >= *((_DWORD *)qword_140168520 + ProcNumber.Group) )
        {
LABEL_356:
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v3 + 17, v101);
          v102 = (struct _KDPC *)(*((_QWORD *)v3 + 1) + 200LL);
          v103 = 0LL;
        }
        else
        {
          if ( ExpInterlockedPushEntrySList(
                 (PSLIST_HEADER)P + 8 * (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6)) + 5,
                 v101) )
          {
            goto LABEL_195;
          }
          v102 = (struct _KDPC *)((char *)P + 128 * (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6)));
          if ( LODWORD(v102[1].DeferredContext) == 2 )
            goto LABEL_195;
          v103 = (void *)*((_QWORD *)v3 + 1);
        }
        KeInsertQueueDpc(v102, v103, 0LL);
        v109 = 0LL;
      }
      goto LABEL_196;
    }
    if ( v2 == 8193 )
    {
      if ( !v3 || !v141 || !v143 )
        goto LABEL_195;
      sub_140010960((__int64)&v141[-2].DpcListEntry, (__int64 *)v143);
      v109 = 0LL;
    }
    else
    {
      v104 = (unsigned int)(v2 - 8194);
      switch ( v2 )
      {
        case 8194:
          if ( !v4 )
          {
            if ( byte_140168DAA )
            {
              v105 = (KDEFERRED_ROUTINE *)v143;
              v106 = v141;
              if ( v143 )
              {
                v107 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v143 + 64) + 40LL) + 64LL);
                if ( (byte_1401694F1 & 1) != 0 )
                {
                  LOBYTE(v104) = 1;
                  sub_1400A74B4(v143 - 120, v104, v141);
                }
                if ( v107 && *(_DWORD *)(v107 + 1940) && (byte_1401694F3 & 2) != 0 )
                {
                  LOBYTE(v104) = 1;
                  sub_1400A7730((char *)v105 - 120, v104, v106);
                }
              }
            }
          }
          goto LABEL_195;
        case 32768:
          if ( !v3 )
            goto LABEL_195;
          sub_14008A3E8(v3, v141);
          v109 = 0LL;
          break;
        case 32769:
          if ( !v3
            || !v141
            || LOWORD(v141->TargetInfoAsUlong) != 1
            || *((_DWORD *)&v141->0 + 1) < 0x210u
            || HIDWORD(v141->DpcListEntry.Next) < 0x200 )
          {
            goto LABEL_195;
          }
          sub_14008FA40(v3, &v141->ProcessorHistory);
          v109 = 0LL;
          break;
        default:
          if ( v2 != 32770 || !v3 )
            goto LABEL_195;
          sub_14008A698(v3, v141);
          v109 = 0LL;
          break;
      }
    }
LABEL_197:
    va_copy(v109, va);
    if ( !byte_1401687EA )
    {
      if ( byte_140168830 )
      {
        _InterlockedIncrement(&dword_1401687EC);
        ((void (__fastcall *)(int *, _QWORD, int *))qword_140168838)(&dword_1401681E8, (unsigned int)v2, v3);
        _InterlockedDecrement(&dword_1401687EC);
      }
    }
  }
}
