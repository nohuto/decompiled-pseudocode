/*
 * XREFs of PdcPoSleepStudyHelperSetPhaseActive @ 0x140B052F0
 * Callers:
 *     <none>
 * Callees:
 *     SshpSetCollectionActive @ 0x14049C548 (SshpSetCollectionActive.c)
 */

void __fastcall PdcPoSleepStudyHelperSetPhaseActive(int a1, unsigned __int8 a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  struct _KTHREAD *p_TimerListEntry; // rcx

  if ( a1 )
  {
    v2 = a1 - 1;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          v5 = v4 - 1;
          if ( v5 )
          {
            v6 = v5 - 1;
            if ( v6 )
            {
              if ( v6 != 3 )
                return;
              p_TimerListEntry = (struct _KTHREAD *)&SshpBlockerCollections.Timer.TimerListEntry;
            }
            else
            {
              p_TimerListEntry = (struct _KTHREAD *)&SshpBlockerCollections.Teb;
            }
          }
          else
          {
            p_TimerListEntry = (struct _KTHREAD *)&SshpBlockerCollections.ApcStateFill[40];
          }
        }
        else
        {
          p_TimerListEntry = (struct _KTHREAD *)&SshpBlockerCollections.TrapFrame;
        }
      }
      else
      {
        p_TimerListEntry = (struct _KTHREAD *)&SshpBlockerCollections.StateSaveArea;
      }
    }
    else
    {
      p_TimerListEntry = (struct _KTHREAD *)&SshpBlockerCollections.StackLimit;
    }
  }
  else
  {
    p_TimerListEntry = (struct _KTHREAD *)&SshpBlockerCollections.WaitBlockFill11[16];
  }
  SshpSetCollectionActive(p_TimerListEntry, a2);
}
