/*
 * XREFs of ?HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180033F6C
 * Callers:
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180083200 (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_H.c)
 * Callees:
 *     ?RmHamHostIsPple@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180033F44 (-RmHamHostIsPple@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempLockInitialize @ 0x180034D44 (CempLockInitialize.c)
 *     ?RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800426C0 (-RmHamHostGetJobType@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSid@U_SID@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSid@U_SID@@@@@Z @ 0x18005C904 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U3@U-$__ea_18005C904.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

void __fastcall HampHostInitialize(
        char a1,
        struct _RM_PSM_HOST_INFO *a2,
        struct _HAM_APPLICATION *a3,
        struct _RM_HAM_ACTIVITY_HOST *a4)
{
  __int64 v8; // rax
  _OWORD *v9; // rcx
  __int128 v10; // xmm1
  BOOL IsPple; // eax
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // [rsp+50h] [rbp-18h] BYREF
  char *v17; // [rsp+58h] [rbp-10h] BYREF
  char v18; // [rsp+A0h] [rbp+38h] BYREF
  char JobType; // [rsp+A8h] [rbp+40h] BYREF
  int v20; // [rsp+B0h] [rbp+48h] BYREF
  unsigned __int64 v21; // [rsp+B8h] [rbp+50h] BYREF

  memset_0(a4, 0, 0x428uLL);
  CempLockInitialize(a4);
  *((_QWORD *)a4 + 77) = (char *)a4 + 608;
  *((_QWORD *)a4 + 76) = (char *)a4 + 608;
  RtlInitializeConditionVariable((char *)a4 + 16);
  RtlInitializeConditionVariable((char *)a4 + 696);
  *((_QWORD *)a4 + 90) = 0LL;
  *((_QWORD *)a4 + 91) = 0LL;
  *((_QWORD *)a4 + 92) = -1LL;
  *((_QWORD *)a4 + 95) = 0LL;
  *((_QWORD *)a4 + 96) = 0LL;
  v8 = 4LL;
  *((_QWORD *)a4 + 97) = -1LL;
  *((_QWORD *)a4 + 127) = -1LL;
  *((_QWORD *)a4 + 128) = -1LL;
  *((_QWORD *)a4 + 129) = -1LL;
  *((_QWORD *)a4 + 130) = -1LL;
  v9 = (_OWORD *)((char *)a4 + 24);
  *((_QWORD *)a4 + 83) &= 0xFFFFFFFFF997FFFFuLL;
  *((_QWORD *)a4 + 83) |= 0x19940000uLL;
  do
  {
    *v9 = *(_OWORD *)a2;
    v9[1] = *((_OWORD *)a2 + 1);
    v9[2] = *((_OWORD *)a2 + 2);
    v9[3] = *((_OWORD *)a2 + 3);
    v9[4] = *((_OWORD *)a2 + 4);
    v9[5] = *((_OWORD *)a2 + 5);
    v9[6] = *((_OWORD *)a2 + 6);
    v9 += 8;
    v10 = *((_OWORD *)a2 + 7);
    a2 = (struct _RM_PSM_HOST_INFO *)((char *)a2 + 128);
    *(v9 - 1) = v10;
    --v8;
  }
  while ( v8 );
  *v9 = *(_OWORD *)a2;
  v9[1] = *((_OWORD *)a2 + 1);
  *((_QWORD *)v9 + 4) = *((_QWORD *)a2 + 4);
  IsPple = RmHamHostIsPple(a4);
  *((_QWORD *)a4 + 83) = ((unsigned __int64)IsPple << 57) ^ (*((_QWORD *)a4 + 83) ^ ((unsigned __int64)IsPple << 57)) & 0xFDFFFFFFFFFFFFFFuLL;
  *((_QWORD *)a4 + 101) = 1LL;
  *((_BYTE *)a4 + 592) = (a1 & 2) != 0;
  if ( _InterlockedIncrement64((volatile signed __int64 *)a3 + 3) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)a4 + 99) = a3;
  if ( (unsigned int)dword_1800E12B0 > 4 && (qword_1800E12C0 & 8) != 0 && (qword_1800E12C8 & 8) == qword_1800E12C8 )
  {
    v21 = (((unsigned __int64)a4 - 56) & -(__int64)(a4 != 0LL)) + 544;
    v20 = *((_DWORD *)a4 + 139);
    v18 = *((_BYTE *)a4 + 592);
    JobType = RmHamHostGetJobType(a4);
    v16 = *(_QWORD *)(v12 + 32);
    v17 = (char *)a4 + 24;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSid<_SID>>(
      v13,
      (unsigned int)&unk_1800CD8A0,
      v14,
      v15,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&JobType,
      (__int64)&v18,
      (__int64)&v20,
      (__int64)&v21);
  }
}
