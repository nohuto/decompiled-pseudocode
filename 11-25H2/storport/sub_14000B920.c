/*
 * XREFs of sub_14000B920 @ 0x14000B920
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000BCAC @ 0x14000BCAC (sub_14000BCAC.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 */

__int64 __fastcall sub_14000B920(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r15
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  POWER_STATE v9; // ebx
  REQUEST_POWER_COMPLETE *v10; // r9
  void *Context; // rdx
  NTSTATUS v12; // esi
  bool v13; // cl
  char v14; // r14

  v4 = 1;
  v5 = sub_14000BCAC(a1, a2, a3);
  v6 = v5;
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400680F0(off_140168120->AttachedDevice, 43LL, &unk_14014C778, v5, a2);
  }
  v7 = *(_QWORD *)(a2 + 184);
  v8 = *(int *)(v7 + 24);
  v9.SystemState = (SYSTEM_POWER_STATE)stru_140148968[v8];
  if ( *(_DWORD *)(v6 + 344) < (int)v8 )
  {
    v4 = 0;
LABEL_7:
    v10 = (REQUEST_POWER_COMPLETE *)sub_14000B4E0;
    Context = (void *)a2;
    goto LABEL_8;
  }
  if ( !*(_QWORD *)(v6 + 4960) )
    goto LABEL_7;
  v10 = sub_14003AF90;
  Context = (void *)v6;
LABEL_8:
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(v7 + 3) |= 1u;
  v12 = *(_DWORD *)(a2 + 48);
  if ( v12 >= 0 )
  {
    v13 = (_DWORD)v8 != 1 && *(_DWORD *)(v6 + 344) < (int)v8;
    v14 = 2;
    *(_DWORD *)(v6 + 352) = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 32LL);
    *(_BYTE *)(v6 + 356) = v13;
    *(_DWORD *)(v6 + 344) = v8;
    v12 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(v6 + 8), 2u, v9, v10, Context, 0LL);
    if ( v12 == 259 )
    {
      if ( v9.SystemState != PowerSystemWorking )
        v14 = 4;
      *(_BYTE *)(v6 + 107) |= v14;
      v12 = 0;
    }
  }
  if ( v4 || v12 < 0 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v6 + 336));
  else
    v12 = -1073741802;
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400556F8(off_140168120->AttachedDevice, 44LL, &unk_14014C778, v6, a2, v12);
  }
  return (unsigned int)v12;
}
