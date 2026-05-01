/*
 * XREFs of ??$make_shared@UFlyoutInstanceRecord@SnapFlyoutHost@@U12@@std@@YA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@$$QEAUFlyoutInstanceRecord@SnapFlyoutHost@@@Z @ 0x18058DFAC
 * Callers:
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x18058E8F0 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<SnapFlyoutHost::FlyoutInstanceRecord,SnapFlyoutHost::FlyoutInstanceRecord>(
        _QWORD *a1,
        __int64 *a2)
{
  _DWORD *v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *result; // rax

  v4 = operator new(0x80uLL);
  *(_OWORD *)v4 = 0LL;
  v4[2] = 1;
  v4[3] = 1;
  *(_QWORD *)v4 = &std::_Ref_count_obj2<SnapFlyoutHost::FlyoutInstanceRecord>::`vftable';
  v5 = *a2;
  *a2 = 0LL;
  *((_QWORD *)v4 + 2) = v5;
  v6 = a2[1];
  a2[1] = 0LL;
  *((_QWORD *)v4 + 3) = v6;
  v7 = a2[2];
  a2[2] = 0LL;
  *((_QWORD *)v4 + 4) = v7;
  *((_QWORD *)v4 + 5) = a2[3];
  v8 = a2[4];
  a2[4] = 0LL;
  *((_QWORD *)v4 + 6) = v8;
  *((_QWORD *)v4 + 7) = a2[5];
  v9 = a2[6];
  a2[6] = 0LL;
  *((_QWORD *)v4 + 8) = v9;
  *((_QWORD *)v4 + 9) = a2[7];
  v10 = a2[8];
  a2[8] = 0LL;
  *((_QWORD *)v4 + 10) = v10;
  *((_QWORD *)v4 + 11) = a2[9];
  v11 = a2[10];
  a2[10] = 0LL;
  *((_QWORD *)v4 + 12) = v11;
  *((_QWORD *)v4 + 13) = a2[11];
  v12 = a2[12];
  a2[12] = 0LL;
  *((_QWORD *)v4 + 14) = v12;
  *((_QWORD *)v4 + 15) = a2[13];
  result = a1;
  *a1 = v4 + 4;
  a1[1] = v4;
  return result;
}
