/*
 * XREFs of ?DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180047690
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1800CFD20 (WPP_SF_q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::DeleteSessionNotification(CAudioSession *this, struct ISessionInternalEvents *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  _DWORD *v5; // r14
  _DWORD *p_Type; // rsi
  bool v7; // zf
  _DWORD *i; // r15
  struct ISessionInternalEvents *v9; // r12
  _DWORD *j; // rbp
  __int64 v11; // r15
  _QWORD *v12; // rbp
  _QWORD *v13; // r14

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 69LL, &WPP_ee85f21a7da73824226bb42893b0f656_Traceguids, a2);
  }
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 432);
  if ( a2 )
    (*(void (__fastcall **)(struct ISessionInternalEvents *))(*(_QWORD *)a2 + 8LL))(a2);
  EnterCriticalSection(v4);
  v5 = *(_DWORD **)&v4[1].LockCount;
  p_Type = &v4[1].DebugInfo->Type;
  if ( p_Type != v5 )
  {
    do
    {
      if ( *(struct ISessionInternalEvents **)p_Type == a2 )
      {
        v7 = p_Type[2]-- == 1;
        if ( v7 )
          break;
      }
      p_Type += 4;
    }
    while ( p_Type != v5 );
    if ( p_Type != v5 )
    {
      for ( i = p_Type + 4; i != v5; i += 4 )
      {
        v9 = *(struct ISessionInternalEvents **)i;
        if ( *(struct ISessionInternalEvents **)i == a2 )
        {
          v7 = i[2]-- == 1;
          if ( v7 )
            continue;
        }
        if ( *(struct ISessionInternalEvents **)p_Type != v9 )
        {
          if ( v9 )
            (*(void (__fastcall **)(struct ISessionInternalEvents *))(*(_QWORD *)v9 + 8LL))(v9);
          if ( *(_QWORD *)p_Type )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)p_Type + 16LL))(*(_QWORD *)p_Type);
          *(_QWORD *)p_Type = v9;
        }
        p_Type[2] = i[2];
        p_Type += 4;
      }
      if ( p_Type != v5 )
      {
        for ( j = *(_DWORD **)&v4[1].LockCount; v5 != j; v5 += 4 )
        {
          v11 = *(_QWORD *)v5;
          if ( *(_QWORD *)p_Type != *(_QWORD *)v5 )
          {
            if ( v11 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(*(_QWORD *)v5);
            if ( *(_QWORD *)p_Type )
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)p_Type + 16LL))(*(_QWORD *)p_Type);
            *(_QWORD *)p_Type = v11;
          }
          p_Type[2] = v5[2];
          p_Type += 4;
        }
        v12 = *(_QWORD **)&v4[1].LockCount;
        v13 = p_Type;
        if ( p_Type != (_DWORD *)v12 )
        {
          do
          {
            if ( *v13 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v13 + 16LL))(*v13);
            v13 += 2;
          }
          while ( v13 != v12 );
        }
        *(_QWORD *)&v4[1].LockCount = p_Type;
      }
    }
  }
  LeaveCriticalSection(v4);
  if ( a2 )
    (*(void (__fastcall **)(struct ISessionInternalEvents *))(*(_QWORD *)a2 + 16LL))(a2);
  return 0LL;
}
