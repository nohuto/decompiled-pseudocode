/*
 * XREFs of sub_1409EC190 @ 0x1409EC190
 * Callers:
 *     sub_1409EBDC0 @ 0x1409EBDC0 (sub_1409EBDC0.c)
 * Callees:
 *     Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline @ 0x1404FA178 (Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SddlpFree @ 0x1409E9A00 (SddlpFree.c)
 *     sub_140A89B4C @ 0x140A89B4C (sub_140A89B4C.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409EC190(__int64 a1, unsigned int a2, _OWORD *a3, __int64 a4)
{
  signed int v7; // esi
  _OWORD *v8; // rdi
  __int64 Pool2; // rax
  __int64 v10; // rbx
  _OWORD *v11; // rax
  int v12; // ecx
  _OWORD *v13; // rax
  void *v15[2]; // [rsp+40h] [rbp-28h] BYREF

  *(_OWORD *)v15 = 0LL;
  if ( a2 < 0x10 )
  {
    v7 = -1073741811;
LABEL_3:
    v8 = v15[1];
    goto LABEL_19;
  }
  Pool2 = ExAllocatePool2(0x100uLL);
  v10 = Pool2;
  v8 = v15[1];
  if ( Pool2 )
    v8 = (_OWORD *)Pool2;
  v15[1] = v8;
  SddlpFree(0LL);
  v7 = v10 == 0 ? 0xC0000017 : 0;
  if ( v10 )
  {
    if ( (unsigned int)Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline() )
    {
      RtlCopyFromUser(v8, *(void **)(a1 + 8), 0xF4uLL);
    }
    else
    {
      ProbeForRead(*(volatile void **)(a1 + 8), 0xF4uLL, 1u);
      v11 = *(_OWORD **)(a1 + 8);
      *v8 = *v11;
      v8[1] = v11[1];
      v8[2] = v11[2];
      v8[3] = v11[3];
      v8[4] = v11[4];
      v8[5] = v11[5];
      v8[6] = v11[6];
      v8[7] = v11[7];
      v11 += 8;
      v8[8] = *v11;
      v8[9] = v11[1];
      v8[10] = v11[2];
      v8[11] = v11[3];
      v8[12] = v11[4];
      v8[13] = v11[5];
      v8[14] = v11[6];
      *((_DWORD *)v8 + 60) = *((_DWORD *)v11 + 28);
    }
    v12 = *((_DWORD *)v8 + 9) & 0xF;
    LODWORD(v15[0]) = v12;
    HIDWORD(v15[0]) = (unsigned __int8)*((_DWORD *)v8 + 9) >> 4;
    if ( v12 == 1 )
    {
      SddlpFree(v8);
      v15[1] = 0LL;
      v7 = sub_140A89B4C(248LL, &v15[1]);
      if ( v7 < 0 )
        goto LABEL_3;
      if ( (unsigned int)Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline() )
      {
        v8 = v15[1];
        RtlCopyFromUser(v15[1], *(void **)(a1 + 8), 0xF8uLL);
      }
      else
      {
        ProbeForRead(*(volatile void **)(a1 + 8), 0xF8uLL, 1u);
        v13 = *(_OWORD **)(a1 + 8);
        v8 = v15[1];
        *(_OWORD *)v15[1] = *v13;
        v8[1] = v13[1];
        v8[2] = v13[2];
        v8[3] = v13[3];
        v8[4] = v13[4];
        v8[5] = v13[5];
        v8[6] = v13[6];
        v8[7] = v13[7];
        v13 += 8;
        v8[8] = *v13;
        v8[9] = v13[1];
        v8[10] = v13[2];
        v8[11] = v13[3];
        v8[12] = v13[4];
        v8[13] = v13[5];
        v8[14] = v13[6];
        *((_QWORD *)v8 + 30) = *((_QWORD *)v13 + 14);
      }
    }
    else if ( v12 )
    {
      v7 = -1073741811;
      goto LABEL_19;
    }
    *(_DWORD *)(a4 + 8) = *((_DWORD *)v8 + 16);
    *(_QWORD *)a4 = *(_QWORD *)(a1 + 8) - (*((_DWORD *)v8 + 10) & 0xFFFFFFF);
    if ( a3 )
    {
      *a3 = *(_OWORD *)v15;
      v8 = 0LL;
    }
  }
LABEL_19:
  SddlpFree(v8);
  return (unsigned int)v7;
}
