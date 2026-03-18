/*
 * XREFs of SendColorimetricControlToDriverCallback @ 0x1401CF770
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DdiControlModeBehavior@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLMODEBEHAVIOR@@@Z @ 0x1401ABF70 (-DdiControlModeBehavior@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLMODEBEHAVIOR@@@Z.c)
 */

__int64 __fastcall SendColorimetricControlToDriverCallback(DXGADAPTER *this, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // edi
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _DXGKARG_CONTROLMODEBEHAVIOR v12; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v13[144]; // [rsp+30h] [rbp-A8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, this, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v13, 0LL);
  v7 = 0;
  if ( v4 >= 0 )
  {
    if ( *((int *)this + 761) >= 2400 )
    {
      *(_QWORD *)&v12.Satisfied.0 = 0LL;
      v12.Request.Value = *(_DWORD *)(a2 + 20) != 0 ? 2 : 0;
      if ( (int)DXGADAPTER::DdiControlModeBehavior(this, &v12) >= 0 )
      {
        if ( (*(_BYTE *)&v12.Satisfied.0 & 2) != 0 )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9) + 24) = this;
          WdLogGlobalForLineNumber = 5196;
        }
        else if ( (*(_BYTE *)&v12.NotSatisfied.0 & 2) != 0 )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9) + 24) = this;
          WdLogGlobalForLineNumber = 5201;
        }
        else
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9) + 24) = this;
          WdLogGlobalForLineNumber = 5206;
        }
      }
    }
  }
  else if ( v4 == -1073741130 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5);
    v8[3] = this;
    v8[4] = *((int *)this + 104);
    v8[5] = *((unsigned int *)this + 103);
    WdLogGlobalForLineNumber = 5176;
  }
  else
  {
    v7 = v4;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
  return v7;
}
