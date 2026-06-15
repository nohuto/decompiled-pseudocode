/*
 * XREFs of sub_14008670C @ 0x14008670C
 * Callers:
 *     sub_140087740 @ 0x140087740 (sub_140087740.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140026F50 @ 0x140026F50 (sub_140026F50.c)
 *     sub_14002EDE0 @ 0x14002EDE0 (sub_14002EDE0.c)
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 *     sub_14004591C @ 0x14004591C (sub_14004591C.c)
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 *     sub_140059F90 @ 0x140059F90 (sub_140059F90.c)
 *     sub_14005F890 @ 0x14005F890 (sub_14005F890.c)
 *     sub_140064A88 @ 0x140064A88 (sub_140064A88.c)
 *     sub_1400866C4 @ 0x1400866C4 (sub_1400866C4.c)
 *     sub_140086C90 @ 0x140086C90 (sub_140086C90.c)
 *     sub_140086EA4 @ 0x140086EA4 (sub_140086EA4.c)
 *     sub_140086F60 @ 0x140086F60 (sub_140086F60.c)
 *     sub_1400888A0 @ 0x1400888A0 (sub_1400888A0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=10
__int64 sub_14008670C(PSRWLOCK SRWLock, _QWORD *a2, char a3, PSRWLOCK *a4, ...)
{
  PSRWLOCK v6; // r13
  __int64 *Ptr; // rbx
  __int64 *v8; // r12
  PSRWLOCK v9; // rdi
  PSRWLOCK v10; // rax
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 *v13; // rsi
  __int64 *i; // rbx
  __int64 *v15; // rdi
  __int64 *v16; // rbx
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  __int64 *v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  unsigned int v25; // edi
  int v26; // edi
  __int64 v27; // [rsp+20h] [rbp-48h] BYREF
  __int64 v28[8]; // [rsp+28h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+0h]
  RTL_SRWLOCK *v30; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v31; // [rsp+78h] [rbp+10h]
  PSRWLOCK *v32; // [rsp+88h] [rbp+20h]
  PSRWLOCK v33; // [rsp+90h] [rbp+28h] BYREF
  va_list va; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v33 = va_arg(va1, PSRWLOCK);
  v32 = a4;
  v31 = a2;
  *a4 = 0LL;
  v6 = v33;
  LOBYTE(v33->Ptr) = 0;
  AcquireSRWLockShared(SRWLock);
  v30 = SRWLock;
  Ptr = (__int64 *)SRWLock[1].Ptr;
  v8 = (__int64 *)SRWLock[2].Ptr;
  try
  {
    while ( Ptr != v8 )
    {
      v33 = 0LL;
      if ( (int)sub_140026F50(*Ptr, (__int64)&stru_1400C6598, (PSRWLOCK *)va) >= 0 )
      {
        v9 = v33;
        if ( !(unsigned int)o__wcsicmp(*v31, *((_QWORD *)v33[6].Ptr + 8)) )
        {
          v9[5].Ptr = (PVOID)GetTickCount64();
          v10 = v33;
          v33 = 0LL;
          *v32 = v10;
          sub_140003238((__int64 *)va);
          sub_14002EDE0(&v30);
          return 0LL;
        }
      }
      sub_140003238((__int64 *)va);
      ++Ptr;
    }
    sub_14002EDE0(&v30);
    if ( a3 )
    {
      result = 2147943568LL;
    }
    else
    {
      AcquireSRWLockExclusive(SRWLock);
      v33 = SRWLock;
      v13 = (__int64 *)SRWLock[2].Ptr;
      for ( i = (__int64 *)SRWLock[1].Ptr; i != v13 && !sub_1400866C4(v12, i); ++i )
        ;
      v15 = i;
      if ( i != v13 )
      {
        while ( ++i != v13 )
        {
          if ( !sub_1400866C4(v12, i) )
            sub_14004591C((__int64)v15++, i);
        }
      }
      if ( v15 != v13 )
      {
        v16 = (__int64 *)SRWLock[2].Ptr;
        while ( v13 != v16 )
          sub_14004591C((__int64)v15++, v13++);
        sub_14005F890(v15, (__int64 *)SRWLock[2].Ptr);
        SRWLock[2].Ptr = v15;
      }
      if ( LOBYTE(v6->Ptr) )
      {
        v17 = sub_140059F90(retaddr, 291LL, (__int64)"avcore\\audiocore\\Server\\inc\\ResourceTokenManager.h", 1450LL);
        sub_14003A998((RTL_SRWLOCK **)va);
        result = v17;
      }
      else if ( ((char *)SRWLock[2].Ptr - (char *)SRWLock[1].Ptr) >> 3 < (unsigned __int64)LODWORD(SRWLock[4].Ptr) )
      {
        v19 = (__int64 *)sub_140086C90(v28);
        v20 = *v19;
        *v19 = 0LL;
        v27 = v20;
        v21 = v28[0];
        if ( v28[0] )
        {
          v28[0] = 0LL;
          sub_1400B6010(v21);
        }
        if ( v20 )
        {
          *(_QWORD *)(v20 + 40) = GetTickCount64();
          v23 = *(_QWORD *)(v20 + 48);
          *(_QWORD *)(v20 + 48) = 0LL;
          if ( v23 )
            sub_1400888A0(v23, v22);
          v24 = sub_140086EA4(v20 + 48, v31, &SRWLock[5]);
          v25 = v24;
          if ( v24 >= 0 )
          {
            v30 = 0LL;
            v28[0] = 0LL;
            v26 = sub_1400B6010(v20);
            if ( v26 >= 0 )
              v26 = sub_1400B6010(v28[0]);
            sub_140003238(v28);
            if ( v26 >= 0 )
            {
              if ( SRWLock[2].Ptr == SRWLock[3].Ptr )
              {
                sub_140086F60(&SRWLock[1], SRWLock[2].Ptr, &v30);
              }
              else
              {
                sub_140064A88((__int64 *)SRWLock[2].Ptr, (__int64 *)&v30);
                SRWLock[2].Ptr = (char *)SRWLock[2].Ptr + 8;
              }
              sub_1400B6010(v20);
              sub_140003238((__int64 *)&v30);
              sub_140056130(&v27);
              sub_14003A998((RTL_SRWLOCK **)va);
              result = 0LL;
            }
            else
            {
              sub_14000C2A8(retaddr, 307, (int)"avcore\\audiocore\\Server\\inc\\ResourceTokenManager.h", v26);
              sub_140003238((__int64 *)&v30);
              sub_140056130(&v27);
              sub_14003A998((RTL_SRWLOCK **)va);
              result = (unsigned int)v26;
            }
          }
          else
          {
            sub_14000C2A8(retaddr, 304, (int)"avcore\\audiocore\\Server\\inc\\ResourceTokenManager.h", v24);
            sub_140056130(&v27);
            sub_14003A998((RTL_SRWLOCK **)va);
            result = v25;
          }
        }
        else
        {
          sub_14000C2A8(retaddr, 302, (int)"avcore\\audiocore\\Server\\inc\\ResourceTokenManager.h", -2147024882);
          sub_140056130(&v27);
          sub_14003A998((RTL_SRWLOCK **)va);
          result = 2147942414LL;
        }
      }
      else
      {
        v18 = sub_140059F90(retaddr, 297LL, (__int64)"avcore\\audiocore\\Server\\inc\\ResourceTokenManager.h", 1450LL);
        sub_14003A998((RTL_SRWLOCK **)va);
        result = v18;
      }
    }
  }
  catch ( ... )
  {
    LODWORD(v32) = sub_14004EEE4(retaddr, 314, (int)"avcore\\audiocore\\Server\\inc\\ResourceTokenManager.h");
    return (unsigned int)v32;
  }
  return result;
}
