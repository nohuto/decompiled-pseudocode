/*
 * XREFs of _dynamic_atexit_destructor_for__ShellGesturesProcessor::s_clients__ @ 0x1801DDE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__ShellGesturesProcessor::s_clients__()
{
  return std::deque<ShellGesturesClientProxy *>::~deque<ShellGesturesClientProxy *>(&ShellGesturesProcessor::s_clients);
}
