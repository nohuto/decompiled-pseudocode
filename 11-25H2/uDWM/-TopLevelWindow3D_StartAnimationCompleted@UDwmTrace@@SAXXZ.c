/*
 * XREFs of ?TopLevelWindow3D_StartAnimationCompleted@UDwmTrace@@SAXXZ @ 0x18004CFBC
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180049AF4 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     ?Provider@UDwmTrace@@SAPEBU_tlgProvider_t@@XZ @ 0x18004B810 (-Provider@UDwmTrace@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18004F434 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

void __fastcall UDwmTrace::TopLevelWindow3D_StartAnimationCompleted(__int64 a1)
{
  const struct _tlgProvider_t *v1; // rax
  __int64 v2; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v3[32]; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+60h] [rbp-18h]
  int v6; // [rsp+64h] [rbp-14h]

  v1 = UDwmTrace::Provider(a1);
  if ( *(_DWORD *)v1 > 5u
    && (*((_QWORD *)v1 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v1 + 3) & 0x200000000000LL) == *((_QWORD *)v1 + 3) )
  {
    v6 = 0;
    v4 = &v2;
    v2 = 0x1000000LL;
    v5 = 8;
    tlgWriteTransfer_EtwEventWriteTransfer((_DWORD)v1, (unsigned int)&unk_180105B69, 0, 0, 3, (__int64)v3);
  }
}
