/*
 * XREFs of ??1DLODCOBJ@@QEAA@XZ @ 0x140188474
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1400B3E48 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DLODCOBJ::~DLODCOBJ(DLODCOBJ *this)
{
  unsigned int v2; // eax
  __int64 v3; // rdi
  unsigned int v4; // esi
  __int64 v5; // rbp
  struct _DC_ATTR *v6; // rax
  unsigned int CurrentProcessId; // eax
  __int64 v8; // rdi
  unsigned int v9; // esi
  __int64 v10; // rbp
  struct _DC_ATTR *UserAttr; // rax

  if ( *(_QWORD *)this )
  {
    if ( *((_BYTE *)this + 96) )
    {
      *(_DWORD *)(*(_QWORD *)this + 40LL) &= ~2u;
      *((_BYTE *)this + 96) = 0;
    }
    if ( *(_QWORD *)this )
    {
      if ( *((_DWORD *)this + 2) && (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) != 0 )
      {
        CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
        v8 = *(_QWORD *)this;
        v9 = CurrentProcessId & 0xFFFFFFFC;
        if ( **(_QWORD **)this )
        {
          v10 = HmgPentryFromPobj(*((_QWORD *)this + 2), v8);
        }
        else
        {
          v10 = v8 + 2152;
          *(_OWORD *)(v8 + 2152) = 0LL;
          *(_QWORD *)(v8 + 2168) = 0LL;
          *(_DWORD *)(v8 + 2160) = -2147483630;
          *(_QWORD *)(v8 + 2168) = GreEncodeUserModePointer(0LL);
        }
        if ( v9 == (*(_DWORD *)(v10 + 8) & 0xFFFFFFFE) )
        {
          UserAttr = DCOBJ::GetUserAttr(this);
          if ( UserAttr )
            DC::RestoreAttributes(*(DC **)this, UserAttr);
        }
        *(_DWORD *)(*(_QWORD *)this + 44LL) &= ~2u;
        *((_DWORD *)this + 2) = 0;
      }
      _InterlockedDecrement16((volatile signed __int16 *)(*(_QWORD *)this + 12LL));
      *(_QWORD *)this = 0LL;
    }
  }
  PopThreadGuardedObject((char *)this + 64);
  if ( *(_QWORD *)this )
  {
    if ( *((_DWORD *)this + 2) && (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) != 0 )
    {
      v2 = (unsigned int)PsGetCurrentProcessId();
      v3 = *(_QWORD *)this;
      v4 = v2 & 0xFFFFFFFC;
      if ( **(_QWORD **)this )
      {
        v5 = HmgPentryFromPobj(*((_QWORD *)this + 2), v3);
      }
      else
      {
        v5 = v3 + 2152;
        *(_OWORD *)(v3 + 2152) = 0LL;
        *(_QWORD *)(v3 + 2168) = 0LL;
        *(_DWORD *)(v3 + 2160) = -2147483630;
        *(_QWORD *)(v3 + 2168) = GreEncodeUserModePointer(0LL);
      }
      if ( v4 == (*(_DWORD *)(v5 + 8) & 0xFFFFFFFE) )
      {
        v6 = DCOBJ::GetUserAttr(this);
        if ( v6 )
          DC::RestoreAttributes(*(DC **)this, v6);
      }
      *(_DWORD *)(*(_QWORD *)this + 44LL) &= ~2u;
      *((_DWORD *)this + 2) = 0;
    }
    _InterlockedDecrement16((volatile signed __int16 *)(*(_QWORD *)this + 12LL));
    *(_QWORD *)this = 0LL;
  }
  PopThreadGuardedObject((char *)this + 32);
}
