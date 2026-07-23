/*
 * XREFs of sub_140B3B01C @ 0x140B3B01C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     PsGetProcessId @ 0x140460330 (PsGetProcessId.c)
 *     Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline @ 0x1404FA178 (Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     sub_14088686C @ 0x14088686C (sub_14088686C.c)
 *     sub_140886950 @ 0x140886950 (sub_140886950.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     sub_1409E8440 @ 0x1409E8440 (sub_1409E8440.c)
 *     sub_1409E8670 @ 0x1409E8670 (sub_1409E8670.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     sub_1409EB6CC @ 0x1409EB6CC (sub_1409EB6CC.c)
 *     sub_1409EB860 @ 0x1409EB860 (sub_1409EB860.c)
 *     sub_1409EBBA4 @ 0x1409EBBA4 (sub_1409EBBA4.c)
 *     sub_1409EC45C @ 0x1409EC45C (sub_1409EC45C.c)
 *     sub_1409EC554 @ 0x1409EC554 (sub_1409EC554.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140B3B01C(void *Src, size_t Size)
{
  size_t v2; // r15
  _DWORD *v4; // rsi
  int v5; // ebx
  __int64 Pool2; // rax
  int v7; // edi
  HANDLE ProcessId; // rax
  struct _KLOCK_ENTRIES *v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  int v21; // eax
  __int64 *v23; // [rsp+70h] [rbp+8h] BYREF
  __int64 v24; // [rsp+80h] [rbp+18h]

  v2 = (unsigned int)Size;
  v23 = 0LL;
  v4 = 0LL;
  v24 = 0LL;
  if ( !Src )
  {
    v7 = 4;
    goto LABEL_13;
  }
  if ( (unsigned int)Size < 8 )
  {
    v5 = -1073741811;
    goto LABEL_34;
  }
  v5 = 0;
  Pool2 = ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    v4 = (_DWORD *)Pool2;
    v24 = Pool2;
  }
  else
  {
    v5 = -1073741801;
  }
  SddlpFree(0LL);
  if ( v5 >= 0 )
  {
    if ( (unsigned int)Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline() )
    {
      RtlCopyFromUser(v4, Src, v2);
    }
    else
    {
      ProbeForRead(Src, v2, 1u);
      memmove(v4, Src, v2);
    }
    v7 = *v4;
LABEL_13:
    ProcessId = PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
    v5 = sub_1409EB860((__int64)ProcessId, v7 != 7, (__int64 *)&v23, v9);
    if ( v5 < 0 )
      goto LABEL_34;
    v13 = v7 - 1;
    if ( !v13 )
    {
      v21 = sub_1409EC554((__int64)v23, (__int64)v4, v2);
      goto LABEL_33;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v21 = sub_1409EC45C((__int64)v23, (__int64)v4, v2);
      goto LABEL_33;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      v21 = sub_1409E8670((__int64)v23, v4, Src, v2);
      goto LABEL_33;
    }
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( !v17 || (v18 = v17 - 1) == 0 )
      {
        v5 = Src != 0LL ? -1073741822 : -1073741811;
        goto LABEL_34;
      }
      v19 = v18 - 1;
      if ( !v19 )
      {
        v21 = sub_1409EB6CC(*v23, v10, v11, v12);
        goto LABEL_33;
      }
      v20 = v19 - 1;
      if ( !v20 )
      {
        v21 = sub_140886950((__int64)v23, (__int64)v4, v2);
        goto LABEL_33;
      }
      if ( v20 == 1 )
      {
        v21 = sub_14088686C((__int64)v23, (__int64)v4, v2);
LABEL_33:
        v5 = v21;
        goto LABEL_34;
      }
    }
    else if ( !v4 )
    {
      v21 = sub_1409E8440((__int64)v23, v10);
      goto LABEL_33;
    }
    v5 = -1073741811;
  }
LABEL_34:
  sub_1409EBBA4((__int64)v23);
  SddlpFree(v4);
  return (unsigned int)v5;
}
