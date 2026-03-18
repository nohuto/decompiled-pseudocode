/*
 * XREFs of ?DxgkpEscapeStopAdapters@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x140198710
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x140033570 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x140057920 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkInvalidateDeviceState @ 0x14006C7B4 (DxgkInvalidateDeviceState.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

__int64 __fastcall DxgkpEscapeStopAdapters(PVOID *this, _BYTE *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // edi
  _QWORD *v8; // rax
  PVOID v10; // rsi
  _BYTE v11[144]; // [rsp+20h] [rbp-B8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v11, (struct DXGADAPTER *const)this, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v11, 0LL);
  v7 = 0;
  if ( v4 >= 0 )
  {
    v10 = this[27];
    if ( v10 )
    {
      ObfReferenceObject(this[27]);
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v11);
      if ( !DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)this)
        && (*((_DWORD *)this + 111) & 0x10) == 0
        && ((_DWORD)this[377] & 8) == 0 )
      {
        a2[1] = 1;
        DxgkInvalidateDeviceState((__int64)this[27]);
      }
      ObfDereferenceObject(v10);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v11);
      return 0LL;
    }
    else
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v11);
      return 3221225473LL;
    }
  }
  else
  {
    if ( v4 == -1073741130 )
    {
      v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5);
      v8[3] = this;
      v8[4] = *((int *)this + 104);
      v8[5] = *((unsigned int *)this + 103);
      WdLogGlobalForLineNumber = 13100;
    }
    else
    {
      v7 = v4;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v11);
    return v7;
  }
}
