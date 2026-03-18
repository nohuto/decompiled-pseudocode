/*
 * XREFs of sub_140B38E0C @ 0x140B38E0C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     PsGetProcessId @ 0x140466BE0 (PsGetProcessId.c)
 *     Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline @ 0x140500988 (Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     sub_14088046C @ 0x14088046C (sub_14088046C.c)
 *     sub_140880550 @ 0x140880550 (sub_140880550.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     sub_1409EBC70 @ 0x1409EBC70 (sub_1409EBC70.c)
 *     sub_1409EBEA0 @ 0x1409EBEA0 (sub_1409EBEA0.c)
 *     SddlpFree @ 0x1409ED230 (SddlpFree.c)
 *     sub_1409EEEFC @ 0x1409EEEFC (sub_1409EEEFC.c)
 *     sub_1409EF090 @ 0x1409EF090 (sub_1409EF090.c)
 *     sub_1409EF3D4 @ 0x1409EF3D4 (sub_1409EF3D4.c)
 *     sub_1409EFC8C @ 0x1409EFC8C (sub_1409EFC8C.c)
 *     sub_1409EFD84 @ 0x1409EFD84 (sub_1409EFD84.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140B38E0C(void *Src, size_t Size)
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
    v5 = sub_1409EF090((__int64)ProcessId, v7 != 7, (__int64 *)&v23, v9);
    if ( v5 < 0 )
      goto LABEL_34;
    v13 = v7 - 1;
    if ( !v13 )
    {
      v21 = sub_1409EFD84((__int64)v23, (__int64)v4, v2);
      goto LABEL_33;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v21 = sub_1409EFC8C((__int64)v23, (__int64)v4, v2);
      goto LABEL_33;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      v21 = sub_1409EBEA0((__int64)v23, v4, Src, v2);
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
        v21 = sub_1409EEEFC(*v23, v10, v11, v12);
        goto LABEL_33;
      }
      v20 = v19 - 1;
      if ( !v20 )
      {
        v21 = sub_140880550((__int64)v23, (__int64)v4, v2);
        goto LABEL_33;
      }
      if ( v20 == 1 )
      {
        v21 = sub_14088046C((__int64)v23, (__int64)v4, v2);
LABEL_33:
        v5 = v21;
        goto LABEL_34;
      }
    }
    else if ( !v4 )
    {
      v21 = sub_1409EBC70((__int64)v23, v10);
      goto LABEL_33;
    }
    v5 = -1073741811;
  }
LABEL_34:
  sub_1409EF3D4((__int64)v23);
  SddlpFree(v4);
  return (unsigned int)v5;
}
