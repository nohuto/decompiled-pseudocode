/*
 * XREFs of ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x1400B15CC
 * Callers:
 *     NtDCompositionSetChannelCommitCompletionEvent @ 0x1400B3810 (NtDCompositionSetChannelCommitCompletionEvent.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1400AE780 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1400B17A4 (-Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetCommitCompletionEvent(
        DirectComposition::CApplicationChannel *this,
        void *a2,
        char a3)
{
  struct _ERESOURCE *v3; // rdi
  __int64 v6; // rdx
  NTSTATUS v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _ERESOURCE *v10; // rax
  PVOID Buffer; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0LL;
  Buffer = 0LL;
  if ( *((_QWORD *)this + 48) )
    return (unsigned int)-1073741790;
  if ( !a3 )
    goto LABEL_3;
  if ( (*((_BYTE *)this + 264) & 8) != 0 )
    return (unsigned int)-1073741790;
  v10 = (struct _ERESOURCE *)Win32AllocPoolImpl(64LL, 0x68uLL, 0x73634344u);
  v3 = v10;
  if ( !v10 )
    return (unsigned int)-1073741801;
  memset(v10, 0, sizeof(struct _ERESOURCE));
LABEL_3:
  v7 = DirectComposition::CEvent::Create(a2, (int)a2, (struct DirectComposition::CEvent **)&Buffer);
  if ( v7 >= 0 )
  {
    if ( !v3 || (v7 = ExInitializeResourceLite(v3), v7 >= 0) )
    {
      *((_QWORD *)this + 48) = Buffer;
      *((_QWORD *)this + 49) = v3;
      return (unsigned int)v7;
    }
  }
  else if ( !v3 )
  {
    goto LABEL_6;
  }
  GreDeleteFastMutex((char *)v3, v6, v8, v9);
LABEL_6:
  if ( Buffer )
    DirectComposition::CEvent::`scalar deleting destructor'((DirectComposition::CEvent *)Buffer);
  return (unsigned int)v7;
}
